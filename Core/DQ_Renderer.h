#pragma once

#include "RootSignature.h"
#include "PipelineState.h"

namespace DQ
{
    class Renderer
    {
    public:
        Renderer();

        void Create();

    private:
        RootSignature m_GlobalRootSignature;
        GraphicsPSO m_GBufferPSO;
        GraphicsPSO m_LightPSO;
        GraphicsPSO m_PostProcessPSO;
    };
}
