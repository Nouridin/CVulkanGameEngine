#include <vulkan/vulkan.h>
#include <iostream>
#include <GLFW/glfw3.h>

	// Create a Window
GLFWwindow* createWindow(int width, int height, const char* title) {

	if (!glfwInit()) {
		std::cerr << "Failed to initialize GLFW!" << std::endl;
		return nullptr;
	}

	glfwWidnowHint(GLFW_CLIENT_API, GLFW_NO_API);
	GLFWwindow* window = glfwCreateWindow(width, height, title, nullptr, nullptr);
	if (!window) {

		std::cerr << "Failed to create GLFW window!" << std::endl;
		glfwTerminate();
		return nullptr;

	}
	return window;
}

	
int main() {
	// Create a GLFW window
	GLFWwindow* window = createWindow(800, 600, "Vulkan Window");
	if (!window) return -1;

	VkInstance instance;
	// Create Instance
	VkInstanceCreateInfo createInfo = {};
	createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;

	if (vkCreateInstance(&createInfo, nullptr, &instance) != VK_SUCCESS) {
		std::cerr << "Failed to create Vulkan instance!" << std::endl;
		return -1;
	}

	VulkanApp app;

	try {
		app.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	
	// Main rendering loop
	while (!glfwWindowShouldClose(window)) {
		// Handle Window events
		glfwPollEvents();

		std::cout << "Rendering frame..." << std::endl;
	}

	std::cout << "Vulkan instance created successfully!" << std::endl;
	// Cleanup
	
	vkDestroyInstance(instance, nullptr);
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}
