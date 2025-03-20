# Chem

A tiny 3D game engine


## Documentation

### Window creation
This game engine currently uses GLFW for window creation.

### Vulkan Instance
A Vulkan instance must be created upon the start and destroyed after closing the game. We use the VulkanSDK to create this instance. We check for the available functionality on the host device and which version of Vulkan is avaialable  