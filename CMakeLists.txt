cmake_minimum_required(VERSION 3.10)
project(VulkanGameEngine)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Vulkan REQUIRED)

include_directories(${Vulkan_INCLUDE_DIRS})

add_executable(VulkanGameEngine
    src/main.cpp
    src/engine.cpp
    src/renderer.cpp
)

target_link_libraries(VulkanGameEngine ${Vulkan_LIBRARIES})

