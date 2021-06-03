Shader "BlackHole/GravitationalLensingDisc"
{
	Properties
	{
		_MainTex ("Texture 1", 2D) = "white" {}
		_MainTex2 ("Texture 2", 2D) = "black" {}
		_MainTex3 ("Texture 3", 2D) = "white" {}
		_Tint1("Tint 1", Color) = (1,1,1,1)
		_Tint2("Tint 2", Color) = (1,1,1,1)
		_BlackHoleMass("Black Hole Mass", Range(0,3)) = 0.0000001
		_MaxStepCount("Max Step Count", Int) = 10
		_FrontStepExtension("Front Step Extension", Float) = 0
		_StepSizeExtension("Step Size Extension", Float) = 1.5
		_EventHorizonDistance("Event Horizon Distance", Float) = .001
		_EventHorizonDistanceDisc("Event Horizon Distance Disc", Float) = 0
		_DiscInnerDistance("Disc Inner Distance", Float) = 0
		_DiscOuterDistance("Disc Outer Distance", Float) = 1
		_RadialTextureScale("Radial Texture Scale", Float) = 90
		_SpinSpeed1("Spin Speed 1", Float) = .3
		_SpinSpeed2("Spin Speed 2", Float) = .5
		_SpinSpeed3("Spin Speed 3", Float) = .5
		_Scale ("Scale", Float) = 1
		_SkyboxFade("Skybox Fade", Range(0,1)) = 1
		_EventHorizonPower("Event Horizon Power", Float) = 1
		_EventHorizonTint("Event Horizon Tint", Float) = 1
		_ParallaxAmount("Parallax Amount", Range(-.1,.1)) = .1
	}
	SubShader
	{
		Cull Front
		ZWrite Off
		Tags { "RenderType"="Transparent" }
		LOD 100
		Blend One One

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma multi_compile _ _SKYBOX_ENABLED

			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float4 vertex : SV_POSITION;
				float3 worldSpacePosition : TEXCOORD1;
				float3 massCentre : TEXCOORD2;
				float3 orientation : TEXCOORD3;
				float scale : TEXCOORD4;
			};

			sampler2D _MainTex;
			sampler2D _MainTex2;
			sampler2D _MainTex3;
			float4 _MainTex_ST;
			float _Scale,
			_BlackHoleMass, 
			_EventHorizonDistance,
			_EventHorizonDistanceDisc,
			_FrontStepExtension,
			_StepSizeExtension, 
			_DiscInnerDistance,
			_DiscOuterDistance,
			_RadialTextureScale,
			_SpinSpeed1,
			_SpinSpeed2,
			_SpinSpeed3,
			_SkyboxFade,
			_EventHorizonPower,
			_EventHorizonTint,
			_ParallaxAmount,
			_Fade;
			int _MaxStepCount;
			float4 _Tint1, _Tint2;
			
			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				o.worldSpacePosition = mul(unity_ObjectToWorld, v.vertex);
				o.massCentre = mul(unity_ObjectToWorld, float4(0,0,0,1));
				o.orientation = normalize(mul(unity_ObjectToWorld, float3(0,1,0)));

				// Get the scale by measuring the length of a local scale right 1 vector in world space
				float3 worldSpaceOrigin = mul(unity_ObjectToWorld, float4(0,0,0,1));
				float3 worldSpaceRight = mul(unity_ObjectToWorld, float4(1,0,0,1));
				o.scale = length(worldSpaceOrigin - worldSpaceRight) * _Scale;	

				return o;
			}

			float sdSphere(float3 position, float3 centre, float radius )
			{
				return length(centre - position)-radius;
			}

			float angle(float2 vec1, float2 vec2)
			{
				float signedAngle = atan2(vec2.y,vec2.x) - atan2(vec1.y,vec1.x);
				
				return signedAngle;
			}

			float4 gravityRayMarch(float3 rayOrigin, float3 rayDirection, float3 massCentre, float3 orientation, float Scale)
			{
				float stepSize = (((_DiscOuterDistance * 2) + _FrontStepExtension) / _MaxStepCount) * (1 + _StepSizeExtension);

				float4 accretionRingColourAdd = float4(0,0,0,1);
				float4 accretionRingColourMultiply = float4(1,1,1,1);

				float4 returnColour = float4(0,0,0,1);

				float squareDistance = 0;

				float3 currentRayDirection = rayDirection;
				float3 currentRayPosition = rayOrigin;

				// Find out which side of the accretin disc we are on initially
				int isAboveCentre = 0;
				float3 displacement = massCentre - currentRayPosition;
				float planeDistance = dot(orientation, displacement);
				isAboveCentre = 0;
				if(planeDistance <= 0)
				{
					isAboveCentre = 1;
				}
				int wasAboveCentre = isAboveCentre;

				// Make one large step up to a distance away from the centre so that we save our steps
				float signedDistance = sdSphere(rayOrigin, massCentre, (_DiscOuterDistance + _FrontStepExtension) * Scale);
				currentRayPosition += normalize(currentRayDirection) * signedDistance;

				int hasCrossedEventHorizon = 0;
				float eventHorizonRim = 0;

				 [unroll(4)] 
				for (int i = 0; i < _MaxStepCount; ++i)
				 //for (int i = 0; i < 4; ++i)
				{
					// Find out if we have crossed the accretion disc
					float3 displacement = massCentre - currentRayPosition;
					float planeDistance = dot(orientation, displacement);
					if(planeDistance <= 0)
					{
						isAboveCentre = 1;
					}
					else
					{
						isAboveCentre = 0;
					}

					// If we've crossed the accretion disc
					if(hasCrossedEventHorizon == 0 && isAboveCentre != wasAboveCentre)
					{
						float rayDirectionScalar = 1 / dot(orientation, currentRayDirection);
                		float3 intersectionPoint = currentRayPosition  + currentRayDirection * rayDirectionScalar * planeDistance;
						float3 intersectionPointLocal = mul(unity_WorldToObject, float4(intersectionPoint, 1));

						float vAngle = angle(intersectionPointLocal.xz, float2(0,1));
						
						float3 intersectionDisplacement = massCentre - intersectionPoint;
						float intersectionDistance = length(intersectionDisplacement);

						if(intersectionDistance > _EventHorizonDistanceDisc * Scale * _BlackHoleMass)
						{
							// Calculate UV Space view direction for parallax
							float3 worldSpaceUDirection = normalize(intersectionDisplacement);
							float3 worldSpaceVDirection = cross(worldSpaceUDirection, orientation);
							float3 normalizedRayDirection = normalize(currentRayDirection);
							float2 uvSpaceViewDirection = float2(dot(worldSpaceUDirection, normalizedRayDirection), dot(worldSpaceVDirection, normalizedRayDirection) * (1 / _RadialTextureScale));
							
							float u = (1 - smoothstep(_DiscInnerDistance * _DiscInnerDistance, _DiscOuterDistance * _DiscOuterDistance, intersectionDistance * (1 / (Scale))));
							float2 uv1 = float2(u, vAngle / _RadialTextureScale + _Time.y * _SpinSpeed1) + uvSpaceViewDirection * _ParallaxAmount;
							float2 uv2 = float2(u, vAngle / _RadialTextureScale + _Time.y * _SpinSpeed2);
							float2 uv3 = float2(u, vAngle / _RadialTextureScale + _Time.y * _SpinSpeed3) - uvSpaceViewDirection * _ParallaxAmount;
							float4 accretionRingTexCol = tex2D(_MainTex3, uv3);

							accretionRingColourAdd += tex2D(_MainTex, uv1) * _Tint1 * accretionRingTexCol * accretionRingColourMultiply;
							accretionRingColourAdd += tex2D(_MainTex2, uv2) * _Tint2 * accretionRingTexCol * accretionRingColourMultiply;

							// Block future light coming through
							accretionRingColourMultiply *= accretionRingTexCol;
							accretionRingColourMultiply *= pow((1 - accretionRingColourAdd), 10);
						}
						else
						{
							hasCrossedEventHorizon = 1;
						}
						
						wasAboveCentre = isAboveCentre;
					}

					// // Have we crossed the event Horizon? (No turning back)
					squareDistance = dot(displacement, displacement);
					if(squareDistance < (_EventHorizonDistance * _EventHorizonDistance * Scale) * (_BlackHoleMass * _BlackHoleMass * Scale))
					{
						hasCrossedEventHorizon = 1;
					}

					float forceMagnitude = _BlackHoleMass / squareDistance;

					float extendedStepSize = stepSize * (1 + _StepSizeExtension);

					currentRayDirection += forceMagnitude * displacement * extendedStepSize * Scale;

					currentRayPosition += normalize(currentRayDirection) * extendedStepSize  * Scale;
				}

				float4 backgroundColor = float4(0,0,0,1);
				if(hasCrossedEventHorizon == 0)
				{
 #if _SKYBOX_ENABLED
					// sample the default reflection cubemap, using the reflection vector
            	    float4 skyData = UNITY_SAMPLE_TEXCUBE(unity_SpecCube0, currentRayDirection);
        	        // decode cubemap data into actual color
    	            backgroundColor.rgb = DecodeHDR (skyData, unity_SpecCube0_HDR) * _SkyboxFade;
#endif
				}

				returnColour =  backgroundColor * accretionRingColourMultiply + accretionRingColourAdd + (eventHorizonRim * accretionRingColourMultiply);

				return returnColour;
			}

			float4 frag (v2f i) : SV_Target
			{
				float3 rayDirection = normalize(i.worldSpacePosition - _WorldSpaceCameraPos);

				// ray origin (camera position)
				float3 ro = _WorldSpaceCameraPos;

				fixed4 col = gravityRayMarch(ro, rayDirection, i.massCentre, i.orientation, i.scale);

				return col * (1 - _Fade);
			}
			ENDCG
		}
	}
	CustomEditor "BlackHoleEditor"
}
