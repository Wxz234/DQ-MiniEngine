#include "pch.h"
#include "DQ_Renderer.h"
#include "CommandContext.h"

namespace DQ
{
    Renderer::Renderer()
    {
        GraphicsContext& gfxContext = GraphicsContext::Begin(L"Scene Render2");
        gfxContext.Finish();
    }
}