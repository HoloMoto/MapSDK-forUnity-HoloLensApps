Shader "MixedRealityToolkitHolo/URPStandard"
{
    Properties
    {
        _Color ("Albedo",color)=(1,1,1,1)
        _MainTex ("Texture", 2D) = "white" {}
           _Metallic("Metallic", Range(0.0, 1.0)) = 0.0
            _Smoothness("Smoothness", Range(0.0, 1.0)) = 0.5
    }
    SubShader
    {


        Pass
        {
            Tags{ "RenderType" = "Opaque"  "RenderPipeline"="UniversalPipeline" "LightMode"="UniversalForward" "UniversalMaterialType" = "Lit" }

            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
            #include  "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Lighting.hlsl"
            struct appdata_t
            {
               
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float3 normal : NORMAL;//追加
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2f
            {
                float4 position : SV_POSITION;
                float2 uv : TEXCOORD0;
                float3 worldNormal : COLOR3;
                float3 normalWS : TEXCOORD1;
                UNITY_VERTEX_OUTPUT_STEREO
            };
            float4 _Color;

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float _Metallic;
            float _Smoothness;
            float4 _LightColor0;
            float3 worldNormal;
            static const float _MinMetallicLightContribution = 0.7;
             v2f vert(appdata_t v)
            {
                v2f o;
                UNITY_SETUP_INSTANCE_ID(v);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
                float4 vertexPosition = v.vertex;
               VertexNormalInputs normal = GetVertexNormalInputs(v.normal);
                o.normalWS = normal.normalWS;
                o.uv = v.uv;
                float3 localNormal = v.normal;
                float3 worldNormal = TransformObjectToWorldNormal(localNormal);
                o.worldNormal = worldNormal;
                o.position = TransformObjectToHClip(vertexPosition);
                
                return o;
            }
            float4 frag(v2f i, float facing : VFACE) : SV_Target
            {
                float4 albedo = tex2D(_MainTex, i.uv);
                float minProperty = min(_Smoothness, _Metallic);

                albedo *= _Color;
                float4 output = albedo;
                
                float3 directionalLightColor = _LightColor0.rgb;
                float oneMinusMetallic = (1.0 - _Metallic);
                Light mainLight = GetMainLight();
                float strength = dot(mainLight.direction, i.normalWS);
                float4 lightColor = float4(mainLight.color, 1);
                float specular = 0.0;
                float3 directionalLightDirection =   strength * lightColor;
                  
                float3 ambient = glstate_lightmodel_ambient + float3(0.25, 0.25, 0.25);

               float diffuse = max(0.0, dot(worldNormal, directionalLightDirection));
            

                 output.rgb *= lerp((ambient + directionalLightColor *diffuse + directionalLightColor * specular) * max(oneMinusMetallic, _MinMetallicLightContribution), albedo, minProperty);
                return output;
            }
            ENDHLSL
        }
    }
}
