Shader "GalaxyExplorer/RingShader"
{
	Properties
	{
		_Color ("Base Color", Color) = (1,1,1,1)
		_InnerDiameter("Inner Diameter", Range(0,1)) = .333
		_OuterDiameter("Outer Diameter", Range(0,1)) = .666
	}
		SubShader
	{
		Tags { "Queue" = "Transparent" "RenderType" = "Transparent" }
		LOD 100

		ZWrite On
		ZTest LEqual
		Cull Off
        Blend SrcAlpha OneMinusSrcAlpha

		Pass
		{

			Tags { "LightMode" = "ForwardBase" }

			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			#pragma multi_compile_fwdbase

			#pragma target 5.0
			#pragma only_renderers d3d11

			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
				UNITY_VERTEX_INPUT_INSTANCE_ID
			};

			struct v2f
			{
				float4 vertex : SV_POSITION;
				float2 uv : TEXCOORD0;
				UNITY_VERTEX_INPUT_INSTANCE_ID
				UNITY_VERTEX_OUTPUT_STEREO
			};

			fixed4 _Color;
			float _InnerDiameter;
			float _OuterDiameter;

			v2f vert(appdata v)
			{
				v2f o;
				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = v.uv;
				return o;
			}

			fixed4 frag(v2f i) : SV_Target
			{
				float2 uv = (-i.uv+.5)*2;
				float mag = length(uv);
				float a = step(mag, _OuterDiameter) * step(_InnerDiameter, mag);
				a *= sin(UNITY_PI*((mag-_InnerDiameter)/(_OuterDiameter-_InnerDiameter)));
				fixed4 c = _Color;
				c.a *= a;
				// c.a *= mag;
				return c;
			}
			ENDCG
		}
	}
}
