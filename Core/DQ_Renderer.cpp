#include "pch.h"
#include "DQ_Renderer.h"

namespace DQ
{
    Renderer::Renderer(){}

    void Renderer::Create()
    {
        D3D12_SAMPLER_DESC pointSamplerDesc{};
        pointSamplerDesc.Filter = D3D12_FILTER_MIN_MAG_MIP_POINT;
        pointSamplerDesc.AddressU = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        pointSamplerDesc.AddressV = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        pointSamplerDesc.AddressW = D3D12_TEXTURE_ADDRESS_MODE_WRAP;
        pointSamplerDesc.MipLODBias = 0.f;
        pointSamplerDesc.MaxAnisotropy = 16;
        pointSamplerDesc.ComparisonFunc = D3D12_COMPARISON_FUNC_LESS_EQUAL;
        pointSamplerDesc.BorderColor[0] = 1.0f;
        pointSamplerDesc.BorderColor[1] = 1.0f;
        pointSamplerDesc.BorderColor[2] = 1.0f;
        pointSamplerDesc.BorderColor[3] = 1.0f;
        pointSamplerDesc.MinLOD = 0.f;
        pointSamplerDesc.MaxLOD = D3D12_FLOAT32_MAX;

        D3D12_SAMPLER_DESC linearSamplerDesc = pointSamplerDesc;
        linearSamplerDesc.Filter = D3D12_FILTER_MIN_MAG_MIP_POINT;

        m_GlobalRootSignature.Reset(0, 2);
        m_GlobalRootSignature.InitStaticSampler(0, pointSamplerDesc);
        m_GlobalRootSignature.InitStaticSampler(1, linearSamplerDesc);
        m_GlobalRootSignature.Finalize(L"Renderer_GlobalRootSignature", D3D12_ROOT_SIGNATURE_FLAG_CBV_SRV_UAV_HEAP_DIRECTLY_INDEXED);


    }
}