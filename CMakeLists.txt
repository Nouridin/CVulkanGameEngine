cmake_minimum_required(VERSION 3.10)

project(VulkanGameEngine)

set(CMAKE_CXX_STANDARD 17)

find_package(Vulkan REQUIRED)

add_executable(VulkanGameEngine src/main.cpp)

target_include_directories(VulkanGameEngine PRIVATE ${Vulkan_INCLUDE_DIRS})
target_link_libraries(VulkanGameEngine PRIVATE ${Vulkan_LIBRARIES})
