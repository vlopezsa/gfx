project (Gfx_${GFX_API})

include(${CMAKE_CURRENT_SOURCE_DIR}/../common.cmake)

add_compile_definitions(Gfx_${GFX_API})

set(sources 
    Gfx.cpp
	Gfx.h
    DX12Interface.h)
    
source_group("Sources"            FILES ${sources})    

add_executable(${PROJECT_NAME} WIN32 ${sources}) 
target_link_libraries (${PROJECT_NAME} LINK_PUBLIC Cauldron_DX12 ImGUI amd_ags DXC d3dcompiler D3D12 DXGI)

set_target_properties(${PROJECT_NAME} PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_HOME_DIRECTORY}/bin")
