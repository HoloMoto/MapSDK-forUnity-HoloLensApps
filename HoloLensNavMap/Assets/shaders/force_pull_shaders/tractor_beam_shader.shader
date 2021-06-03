Shader "GalaxyExplorer/TractorBeam"
{
    Properties
    {
        _MainTex("Line Texture", 2D) = "white" {}
        _LineLength("Line Length", Float) = 1.0
        _LineWidth("Line WIdth", Float) = .05
        _Coverage("Coverage", Range(0,1)) = 1
        [Toggle]_Active("Active", Float) = 0
        [Enum(UnityEngine.Rendering.CompareFunction)] _ZTest("Depth Test", Float) = 4                // "LessEqual"
    }

    SubShader
    {
        Tags { "RenderType" = "Transparent" "Queue" = "Transparent" "LightMode" = "ForwardBase"}

        pass
        {

            ZWrite Off
            ZTest[_ZTest]
            Cull Off
            Blend SrcAlpha OneMinusSrcAlpha

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #pragma multi_compile_fwdbase
            #pragma multi_compile_instancing

            // We only target the HoloLens (and the Unity editor), so take advantage of shader model 5.
            #pragma target 5.0
            #pragma only_renderers d3d11

            #include "UnityCG.cginc"
            #include "AutoLight.cginc"
            #include "Lighting.cginc"
            
            sampler2D _MainTex;
            float4 _MainTex_ST;

            float _LineLength;
            float _LineWidth;
            float _Active;
            float _Coverage;
            
            struct appdata
            {
                float4 vertex : POSITION;
                float4 color : COLOR;
                float2 uv : TEXCOORD0;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2f
            {
                float4 clipPos : SV_POSITION;
                float2 uv :TEXCOORD0;
                float4 color : COLOR;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            v2f vert(appdata v)
            {
                UNITY_SETUP_INSTANCE_ID(v);

                v2f o;
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
                
                o.clipPos = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.color = v.color;
                
                return o;
            }

            float4 frag(v2f i) : COLOR
            {
//                float dToEdge = (_Coverage-i.uv.x)*_LineLength;
//                float m = min(.5, dToEdge/(_LineWidth*.5));
//                float a = min(sin( i.uv.y*UNITY_PI), sin(m*UNITY_PI));
//                a *=a;

                fixed4 c = tex2D(_MainTex, i.uv)*i.color*step(i.uv.x, _Coverage);
                
                return c;
                
            }
            ENDCG
        }
    }
    FallBack "Diffuse"
}
