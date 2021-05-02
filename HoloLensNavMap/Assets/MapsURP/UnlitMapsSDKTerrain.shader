Shader "Unlit/MapsSDKTerrain"
{  
    Properties
    {
        _Color("Color", Color) = (1,1,1,1)
        _MainTex0("Albedo (RGB)", 2D) = "white" {}
        _MainTex1("Color", Color) = (1,1,1,1)
        _MainTex2("Color", Color) = (1,1,1,1)
        _MainTex3("Color", Color) = (1,1,1,1)
    }
    SubShader
    {
        Tags{ "RenderType" = "Opaque" }

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #pragma multi_compile_fog
            #pragma multi_compile __ ENABLE_ELEVATION_TEXTURE
            #pragma multi_compile __ USE_R16_FOR_ELEVATION_TEXTURE
            #pragma multi_compile __ ENABLE_CIRCULAR_CLIPPING

            #include "UnityCG.cginc"
            #include "ElevationOffset.cginc"
            #include "ClippingVolume.cginc"
            #include "ContourLines.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float4 uv : TEXCOORD0;

                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2f
            {
                float2 uv0 : TEXCOORD0;
                float2 uv1 : TEXCOORD1;
                float2 uv2 : TEXCOORD2;
                float2 uv3 : TEXCOORD3;
                float4 vertex : SV_POSITION;
                float3 worldPosition : POSITION1;
                float isSkirt : TEXCOORD4;
#if ENABLE_ELEVATION_TEXTURE && ENABLE_CONTOUR_LINES
                float elevation : TEXCOORD5;
#endif
                UNITY_FOG_COORDS(7)
            };

                        
            float4 _TexScaleAndOffset[4];
            int _MainTexCount = 1;
            sampler2D _MainTex0;
            fixed4 _Color;
            sampler2D _MainTex1;
            sampler2D _MainTex2;
            sampler2D _MainTex3;

            fixed4 blend(fixed4 dst, fixed4 src)
            {
                return fixed4(src.rgb * src.a + dst.rgb * (1.0 - src.a), 1);
            }

            v2f vert (appdata v)
            {
                UNITY_SETUP_INSTANCE_ID(v);
                v2f o;
                UNITY_INITIALIZE_OUTPUT(v2f, o);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

                o.isSkirt = v.uv.z;
                
                o.uv0 = v.uv;
                o.uv1 = v.uv;
                o.uv2 = v.uv;
                o.uv3 = v.uv;

                #if ENABLE_ELEVATION_TEXTURE
                 float2 elevationOffset =
                    CalculateElevationOffset(
                        v.uv,
                        _ElevationTexScaleAndOffset.x,
                        _ElevationTexScaleAndOffset.yz,
                        _ElevationTexScaleAndOffset.w);
                v.vertex.y += elevationOffset.x;
                #endif

                o.vertex = UnityObjectToClipPos(v.vertex);
                if (_MainTexCount > 0) { o.uv0 = _TexScaleAndOffset[0].x * v.uv + _TexScaleAndOffset[0].yz; }
                if (_MainTexCount > 1) { o.uv1 = _TexScaleAndOffset[1].x * v.uv + _TexScaleAndOffset[1].yz; }
                if (_MainTexCount > 2) { o.uv2 = _TexScaleAndOffset[2].x * v.uv + _TexScaleAndOffset[2].yz; }
                if (_MainTexCount > 3) { o.uv3 = _TexScaleAndOffset[3].x * v.uv + _TexScaleAndOffset[3].yz; }

                float3 worldPosition = mul(unity_ObjectToWorld, float4(v.vertex.xyz, 1.0)).xyz;
                o.worldPosition = worldPosition;
                
                UNITY_TRANSFER_FOG(o, o.pos);
                
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                fixed4 color = tex2D(_MainTex0, i.uv0) * _Color;
                if (_MainTexCount > 1) { color = blend(color, tex2D(_MainTex1, i.uv1)); }
                if (_MainTexCount > 2) { color = blend(color, tex2D(_MainTex2, i.uv2)); }
                if (_MainTexCount > 3) { color = blend(color, tex2D(_MainTex3, i.uv3)); }

                float minDistanceToPlane = ClipToVolume(i.worldPosition, i.isSkirt);
                
                #if ENABLE_ELEVATION_TEXTURE && ENABLE_CONTOUR_LINES
                                color = ApplyContourLines(color, i.elevation);
                #endif

                float lerpAmount = saturate(1.0 + minDistanceToPlane / _ClippingVolumeFadeDistance);
                color = lerp(color, _ClippingVolumeColor, lerpAmount);

                UNITY_APPLY_FOG(i.fogCoord, color);

                return fixed4(color.r, color.g, color.b, 1.0);
            }
            ENDCG
        }
    }
}