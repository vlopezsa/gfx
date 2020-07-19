#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

// Windows Header Files:
#include <windows.h>
#include <windowsx.h>
// C RunTime Header Files
#include <malloc.h>
#include <map>
#include <vector>
#include <mutex>
#include <fstream>
#include <cassert>

#include "../../libs/d3d12x/d3dx12.h"

// we are using DirectXMath
#include <DirectXMath.h>
using namespace DirectX;

// TODO: reference additional headers your program requires here
#include "Base/Imgui.h"
#include "Base/ImguiHelper.h"
#include "Base/Fence.h"
#include "Base/Helper.h"
#include "Base/Device.h"
#include "Base/Texture.h"
#include "Base/SwapChain.h"
#include "Base/UploadHeap.h"
#include "Base/UserMarkers.h"
#include "Base/GPUTimestamps.h"
#include "Base/CommandListRing.h"
#include "Base/StaticBufferPool.h"
#include "Base/DynamicBufferRing.h"
#include "Base/ResourceViewHeaps.h"
#include "Base/ShaderCompilerHelper.h"
#include "Base/StaticConstantBufferPool.h"

#include "Misc/Misc.h"
#include "Misc/Error.h"
#include "Misc/Camera.h"
#include "Misc/FrameworkWindows.h"

#include "PostProc/Bloom.h"
#include "PostProc/BlurPS.h"
#include "PostProc/SkyDome.h"
#include "PostProc/ToneMapping.h"
#include "PostProc/ToneMappingCS.h"
#include "PostProc/ColorConversionPS.h"
#include "PostProc/SkyDomeProc.h"
#include "PostProc/DownSamplePS.h"

#include "GLTF/GltfPbrPass.h"
#include "GLTF/GltfBBoxPass.h"
#include "GLTF/GltfDepthPass.h"


#include "Widgets/wireframe.h"

using namespace CAULDRON_DX12;