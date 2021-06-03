////////////////////////////////////////////////////////////////
// Created by Maron https://twitter.com/Maron_Vtuber
////////////////////////////////////////////////////////////////

Shader "StudioMaron/UnlitToon"
{
    Properties {

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Virtual light
	[Header(_____________________________________________)]
	[Header(Virtual Light)]
	[Space(10)]
	_LightCol ("Light color", Color) = (1,1,1)
	_LightInt ("Light Intensity", Range (0.1, 2)) = 1
	_LightRot ("Light Rotation" , Range (-360, 360)) = 45
	_LightHeight ("Light Height" , Range (-90, 90)) = 45
 	[KeywordEnum(Local, World)] _LightSpace("Light Space", Int) = 0
	[Space(10)]

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Settings
	[Header(_____________________________________________)]
	[Header(Main)]
	[Space(10)]
    [NoScaleOffset]_MainTex ("Main Texture", 2D) = "white"{}
	_Main_Col ("Color", Color) = (1,1,1,1)
	[Toggle] _AlphaClipping("Alpha Clipping Enable", Float) = 0
	_AlphaClippingThreshold ("Alpha Clipping Threshold", range(0.0, 1.0)) = 0
//    [Normal][NoScaleOffset]_NormalMap ("�m�[�}���}�b�v", 2D) = "bump" {} // �m�[�}���}�b�v�p
	[HideInInspector]_Alpha ("Alpha", range(0.0, 1.0)) = 1
	[Space(10)]

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Shade
	[Header(_____________________________________________)]
	[Header(Shadow 1)]
	[Space(10)]
    [NoScaleOffset]_Sdw1_Tex ("Shade1 Texture", 2D) = "white"{}
   _Sdw1_Col ("Shadow 1 color", Color) = (0.7,0.7,0.7,1)
	_Sdw1_Bdr ("Shadow 1 boader" , Range (0, 1)) = 0.7
	_Sdw1_Dif ("Shadow 1 diffuse" , Range (0, 1)) = 0
	[Space(10)]

	[Header(_____________________________________________)]
	[Header(Shadow 2)]
	[Space(10)]
    [NoScaleOffset]_Sdw2_Tex ("Shade2 Texture", 2D) = "white"{}
    _Sdw2_Col ("Shadow 2 color", Color) = (0.4,0.4,0.4,1)
	_Sdw2_Bdr ("Shadow 2 boader" , Range (0, 1)) = 0.7
	_Sdw2_Dif ("Shadow 2 diffuse" , Range (0, 1)) = 0
	[Space(10)]
//High light
	[Header(_____________________________________________)]
	[Header(High Light)]
	[Space(10)]
    _High_Col ("High light color", Color) = (1,1,1,1)
	[PowerSlider(2.5)]_High_Bdr ("High light boader" , Range (0, 1)) = 0
	[PowerSlider(2.5)]_High_Dif ("High light diffuse" , Range (0, 1)) = 0
	[Space(10)]
//Rim light
	[Header(_____________________________________________)]
	[Header(Rim Light)]
	[Space(10)]
    _Rim_Col ("Rim light color", Color) = (1,1,1,1)
	[PowerSlider(2.5)]_Rim_Pow ("Rim light power" , Range (0, 1)) = 0
	[PowerSlider(2.5)]_Rim_Dif ("Rim light diffuse" , Range (0, 1)) = 0.3
	[Toggle] _Rim_Dir("Consider light direction", Float) = 0
	[Space(10)]
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Outline
	[Header(_____________________________________________)]
	[Header(Outline)]
	[Space(10)]
	[Toggle] _OUTLINE("Outline Enable", Float) = 0
	_OutlineColor ("Outline Color", Color) = (0,0,0,1)
	[PowerSlider(2.5)]_OutlineThickness ("Outline Thickness" , Range (0, 1)) = 0.01
    [NoScaleOffset]_OutlineMask ("Outline Mask [Black Texture --> No outline]", 2D) = "white" {}
	[Space(10)]

//Rendering
	[Header(_____________________________________________)]
	[Header(Rendering)]
	[Space(10)]
	[KeywordEnum(Off, Front, Back)] _Cull("Culling", Int) = 2
	//[KeywordEnum(Off, On)] _Zwrite("Z Write", Int) = 1

//Stencil
	[Header(_____________________________________________)]
	[Header(Stencil)]
	[Space(10)]
    _Stencil_Ref ("Stencil Ref (0 - 255)", Int) = 0
 	[KeywordEnum(Disabled, Never, Less, Equal, LEqual, Greater, NotEqual, GEqual, Always)] _Stencil_Comp("Stencil Comp", Int) = 8
 	[KeywordEnum(Keep, Zero, Replace)] _Stencil_Pass("Stencil Pass", Int) = 0

}

    SubShader
    {
        Tags { "RenderType"="Opaque"}

        //Tags { "RenderType"="Transparent" "Queue" = "Transparent" }
		//Blend SrcAlpha OneMinusSrcAlpha
		//ZWrite [_Zwrite]

		Stencil
		{
			Ref [_Stencil_Ref]
            Comp [_Stencil_Comp]
            Pass [_Stencil_Pass]
        }

        LOD 100

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 // �A�E�g���C��������Pass
	 // frag�ɂ�_OUTLINE��ON�Ȃ�`��AOFF�Ȃ�discard����
	 
	 Pass
        {
            Cull Front

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
			#pragma shader_feature _OUTLINE_ON

            #include "UnityCG.cginc"
            struct appdata
            {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
				float2 uv_OutlineMask : TEXCOORD0;
            };

            struct v2f
            {
                float4 vertex : SV_POSITION;
				float2 uv_MainTex : TEXCOORD1;
            };


			fixed _OutlineThickness;
			fixed4 _OutlineColor;
		    sampler2D _OutlineMask;

			// Transparent
			float _Alpha;

            v2f vert (appdata v)
            {

                v2f o;
				fixed4 c = tex2Dlod(_OutlineMask, float4 (v.uv_OutlineMask, 0, 0));

                v.vertex += float4(v.normal *_OutlineThickness, 0)*(c.r+c.g+c.b)*0.333;
                o.vertex = UnityObjectToClipPos(v.vertex); 
                return o;
            }
            
			// _OUTLINE��ON�Ȃ�`��AOFF�Ȃ�discard����
            fixed4 frag (v2f i) : SV_Target
            {
	            fixed4 col;

				#ifdef _OUTLINE_ON
		            col = _OutlineColor;
				#else
					discard;
				#endif

				// Transparent
				col.a = _Alpha;

				return col;
            }


            ENDCG
        }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// ���C���̃p�X 
	Pass
        {
			Cull [_Cull]

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            // make fog work
            #pragma multi_compile_fog

            #include "UnityCG.cginc"
 			//****************************************
			//�����ʒu�̋ɍ��W�ϊ�
			//****************************************
			float3 LightPosition(float theta, float phi)
			{
				float pi = 3.141592653;
				float th = pi*theta/180;
				float ph = pi*phi/180;
				// unity�ł�y���W������������xz���ʂ���������
				return float3(cos(th)*cos(ph), sin(ph), sin(th)*cos(ph));
			}
 			//****************************************


			//****************************************
			//�ڋ�Ԃւ̕ϊ��s����擾 (�m�[�}���}�b�v�p)
 			//****************************************
           float4x4 InvTangentMatrix(
                float3 tangent,
                float3 binormal,
                float3 normal )
            {
                //�ڋ�ԍs��
                float4x4 mat = float4x4(float4(tangent.x,tangent.y,tangent.z , 0.0f),
                                float4(binormal.x,binormal.y,binormal.z, 0.0f),
                                float4(normal.x,normal.y,normal.z, 0.0f),
                                float4(0,0,0,1)
                                 );
                return transpose( mat );   // �]�u
            }

 			//****************************************
			// Property�̕ϐ�
			//****************************************

			// Virtual Light
			float4 _LightCol;
			float _LightInt;
			float _LightRot;
			float _LightHeight;
			float _LightSpace;

			// Basic Settings
            sampler2D _MainTex;
            float4 _MainTex_ST;  // o.uv = TRANSFORM_TEX(v.uv, _MainTex) �ɕK�v
			float4 _Main_Col;
			float _AlphaClipping;
			float _AlphaClippingThreshold;
            // sampler2D _NormalMap; //�m�[�}���}�b�v�p
			float  _Alpha; //Transparent

			// Advanced Settings

            sampler2D _Sdw1_Tex;
            sampler2D _Sdw2_Tex;
		    float4 _Sdw1_Col;
			float  _Sdw1_Bdr;
			float  _Sdw1_Dif;
		    float4 _Sdw2_Col;
			float  _Sdw2_Bdr;
			float  _Sdw2_Dif;
		    float4 _High_Col;
			float  _High_Bdr;
			float  _High_Dif;
		    float4 _Rim_Col;
			float  _Rim_Pow;
			float  _Rim_Dif;
			float  _Rim_Dir;


 			//****************************************
			// Shader�̊�{�\��
			//****************************************
            struct appdata
            {
                float4 vertex : POSITION;
				float3 normal : NORMAL;
                float2 uv : TEXCOORD0;
				float3 tangent : TANGENT;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
				float3 normal : NORMAL;
				float3 viewDir : TEXCOORD2;
				// float3 lightDir : TEXCOORD3; // �m�[�}���}�b�v�p
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
            };

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				o.normal = UnityObjectToWorldNormal(v.normal);
				o.viewDir  = normalize(mul(unity_ObjectToWorld, ObjSpaceViewDir(v.vertex)));

				// �m�[�}���}�b�v�p
				// float3 nor = normalize(v.normal);
                // float3 tan = normalize(v.tangent);
                // float3 binor = cross(nor,tan);
				// float3 lightPos = LightPosition(_LightRot, _LightHeight);
				// ���[���h�ʒu�ɂ��郉�C�g�����[�J����Ԃ֕ϊ�����
                // float3 localLight = mul(unity_WorldToObject, lightPos);
				// ���[�J�����C�g��ڋ�Ԃ֕ϊ�����i�s��̊|���鏇�Ԃɒ��Ӂj
                // o.lightDir = mul(localLight, InvTangentMatrix(tan, binor, nor));

                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }


 			//****************************************
			// ���C���ƂȂ�t���O�����g����
			//****************************************
            fixed4 frag (v2f i) : SV_Target
            {
				// half lambert�̌v�Z
				// _LightSpace��0�Ȃ烍�[�J�����W�̃��C�g�A1�Ȃ烏�[���h���W�̃��C�g
				float3 lightDir = _LightSpace * LightPosition(_LightRot, _LightHeight) + (1 - _LightSpace) * normalize(mul( unity_ObjectToWorld, float4(LightPosition(_LightRot, _LightHeight),0)).xyz);

                float NdotL = dot(normalize(i.normal), normalize(lightDir));
				float halfLambert = (NdotL*0.5 + 0.5);

				// half lambert�Ƌ��E�����ɔ͈͂��쐬
				fixed Bdr1 = _Sdw1_Bdr;
				fixed Bdr2 = _Sdw2_Bdr*_Sdw1_Bdr;
				fixed Bdr0 = 1-_High_Bdr*(1-Bdr1);
				fixed a1 = 1-step(Bdr1 + _Sdw1_Dif,halfLambert);
				fixed a2 = 1-step(Bdr1 - _Sdw1_Dif,halfLambert);
				fixed b1 = 1-step(Bdr2 + _Sdw2_Dif,halfLambert);
				fixed b2 = 1-step(Bdr2 - _Sdw2_Dif,halfLambert);
				fixed h1 = 1-step(Bdr0 + _High_Dif,halfLambert);
				fixed h2 = 1-step(Bdr0 - _High_Dif,halfLambert);



				// �e�N�X�`��&�J���[����
				fixed4 mainCol = _Main_Col * tex2D(_MainTex, i.uv);
				fixed4 sdw1Col = _Sdw1_Col * tex2D(_Sdw1_Tex, i.uv);
				fixed4 sdw2Col = _Sdw2_Col * tex2D(_Sdw2_Tex, i.uv);

				// �e�͈͂̐F���쐬
					// ���C��
			    fixed4 A = mainCol;
					// ���C����1�e�̋��E
				fixed4 B = lerp(sdw1Col, mainCol, 0.5+(halfLambert - Bdr1)/(2*_Sdw1_Dif+0.0001));
					// 1�e
				fixed4 C = sdw1Col;
					// 1�e��2�e�̋��E
				fixed4 D = lerp(sdw2Col, sdw1Col, 0.5+(halfLambert - Bdr2)/(2*_Sdw2_Dif+0.0001));
					// 2�e
				fixed4 E = sdw2Col;

					// Light�̋����擾
                float lightInt = _LightInt;
					// �n�C���C�g�̐F��LightInt�����P�x���グ��
				_High_Col *= 10*lightInt;

					// �n�C���C�g
				fixed4 H = lerp(mainCol, _High_Col, 1);
					// �n�C���C�g�ƃ��C���̋��E
				fixed4 HA = lerp(mainCol, lerp(mainCol, _High_Col, 0.5+(halfLambert - Bdr0)/(2*_High_Dif+0.0001)), 1);

				// �͈͖��ɍ쐬�����F�����蓖�Ă�
				fixed4 ramp = lerp(H,lerp(HA,lerp(A,lerp(B,lerp(C,lerp(D,E,b2),b1),a2),a1),h2),h1);

				// Light�̐F�擾
                float4 lightCol = _LightCol;

				// Light�̐F�Ƌ����𔽉f
				ramp *= lightCol * lightInt;
				// Light�̋����ŃI�t�Z�b�g��ݒ�
				ramp += 0.05 * lightCol * (lightInt - 1);

				// �������C�g�̐F�Ƌ��x���擾
				float4 rimCol = _Rim_Col;
				float rimPow = _Rim_Pow;
				float rimDif = _Rim_Dif;

				// �������C�g�̌v�Z
				// _Rim_Dir = 0�őS���������ȃ������C�g�A_Rim_Dir = 1��LightDir���l�������������C�g
				float r = (1-NdotL) * _Rim_Dir * dot(normalize(i.viewDir),i.normal) + (1-_Rim_Dir) * dot(normalize(i.viewDir),i.normal);
				r = saturate(lerp(0, 1/rimDif, r));
				float4 rim = rimCol * 2 * (1.0 -  saturate(r)) * rimPow;

				// �������C�g�̓K�p
				ramp += rim;

				// �m�[�}���}�b�v�̓K�p
				// float3 normal = float4(UnpackNormal(tex2D(_NormalMap, i.uv)), 1);
				// float diff = max(0, dot(normal, normalize(lightDir)));
				// ramp *= diff;

                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, ramp);

				// Transparent
				ramp.a = tex2D(_MainTex, i.uv).a * _Alpha;
				clip(ramp.a - _AlphaClippingThreshold*_AlphaClipping);
                return ramp;
            }


            ENDCG
        }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	}
}