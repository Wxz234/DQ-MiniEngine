SamplerState gSamplerPoint : register(s0);
SamplerState gSamplerLinear : register(s1);

#define PI  3.141592654f
#define ONE_DIV_PI 0.318309886f

struct InternalResource0
{
    float4x4 vp;
    float4x4 vpInverse;
    float3 skyLightDir;
    float3 skyLightRadiance;
    float3 cameraPosition;
};