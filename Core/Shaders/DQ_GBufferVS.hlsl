#include "DQ.hlsli"

void main
(
    in float3 inPosition : POSITION,
    in float3 inNormal : NORMAL,
    in float2 inUV0 : UV0,
    in float4 inTangent : TANGENT,
    in uint inIndex : INDEX,
    out float4 outPosition : SV_POSITION,
    out float3 outNormal : NORMAL,
    out float2 outUV0 : UV0,
    out float4 outTangentW : TANGENT,
    out uint outIndex : INDEX
)
{
    ConstantBuffer<InternalResource0> res = ResourceDescriptorHeap[0];
    outPosition = mul(float4(inPosition, 1.0f), res.vp);
    outNormal = inNormal;
    outUV0 = inUV0;
    outTangentW = inTangent;
    outIndex = inIndex;
}