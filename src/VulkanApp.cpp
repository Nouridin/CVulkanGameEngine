#include "VulkanApp.h"
#include <iostream>
#include <stdexcept>
#include <vector>

void VulkanApp::run() {
	initVulkan();
	mainloop();
	cleanup();
}

void VulkanApp::initVulkan() {
	//swap chain here
}

void VulkanApp::mainloop() {
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
		//rendering section
	}
}

void VulkanApp::cleanup() {
	// Dump and cleanup all Vulkan resources here
}