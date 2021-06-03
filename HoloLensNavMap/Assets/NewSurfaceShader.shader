Shader "Planet/PlanetSphere"
{
    Properties
    {
        _Color("Color", Color) = (1,1,1,1)
        _MainTex("Albedo (RGB)", 2D) = "white" {}
        _BumpMap("Bumpmap", 2D) = "bump" {}
        _NightTex("Night Text", 2D) = "black" {}
        _RimColor("Rim Color", Color) = (0.26,0.19,0.16,0.0)
        _RimScale("Rim Scale", Range(0, 2)) = 1
        _RimPower("Rim Power", Range(0.5,8.0)) = 3.0
        _NightLength("Night Length", Range(0, 1)) = 0
        _NightScale("Night Scale", Range(0, 2)) = 1
        _NightColor("Night Color", Color) = (1,1,1,1)
        _SunlightScale("Sunlight Scale", Range(0, 5)) = 1
    }
    
    SubShader
    {
        Tags { "RenderType" = "Opaque" }
        LOD 200

        CGPROGRAM
        #pragma surface surf Planet noforwardadd
        #pragma target 3.0

        sampler2D _MainTex;
        sampler2D _BumpMap;
        sampler2D _NightTex;

        half4 _Color;
        float4 _RimColor;
        float _RimScale;
        float _RimPower;
        float _NightLength;
        float _NightScale;
        half4 _NightColor;
        float _SunlightScale;

        struct Input
        {
            float2 uv_MainTex;
            float2 uv_BumpMap;
            float2 uv_NightTex;
            float3 viewDir;
            float3 worldNormal; INTERNAL_DATA
        };

        void surf(Input IN, inout SurfaceOutput o)
        {
            half rim = 1.0 - saturate(dot(normalize(IN.viewDir), o.Normal) * _RimScale);
            half3 rimColor = _RimColor.rgb * pow(rim, _RimPower);
            o.Emission.rgb += rimColor;
            
            float3 worldNormal = WorldNormalVector(IN, o.Normal);
            half3 nightMask = saturate((-dot(worldNormal, _WorldSpaceLightPos0) + _NightLength) * _NightScale);
            half3 night = tex2D(_NightTex, IN.uv_NightTex) * _NightColor;
            o.Emission.rgb += night * nightMask;
            
            o.Albedo = tex2D(_MainTex, IN.uv_MainTex) * _Color;
            o.Normal = UnpackNormal(tex2D(_BumpMap, IN.uv_BumpMap));
        }
        
        half4 LightingPlanet(SurfaceOutput s, half3 lightDir, half atten) 
        {
            half3 lambert = _LightColor0.rgb * max(0, dot(s.Normal, lightDir)) * atten;
            half4 c = half4(s.Albedo.rgb, s.Alpha);
            c.rgb *= saturate(lambert * _SunlightScale);
            return c;
        }
        ENDCG
    }
    
    FallBack "Diffuse"
}
