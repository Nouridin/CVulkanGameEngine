#pragma once

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>

class VulkanApp {
public:
	void run();

private:
	void initVulkan();
	void mainloop();
	void cleanup();

	// Vulkan components
	VkInstance instance;
	VkDevice device;
	VkSwapchainKHR swapChain;
	VkQueue graphicsQueue;
	GLFWwindow* window;
};