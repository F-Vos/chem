cmake_minimum_required(VERSION 4.0)
project(chem)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)

# Find the Vulkan SDK (ensure your Vulkan SDK is installed and environment variables set)
find_package(Vulkan REQUIRED)

# Specify the path to your GLFW binary installation
set(GLFW_ROOT "C:/Users/fra/Documents/programming/Libraries/glfw-3.4.bin.WIN64")

# Add the GLFW include directory
include_directories(${GLFW_ROOT}/include)

# Create the executable from your source code
add_executable(${PROJECT_NAME} src/main.cpp)

# Link with Vulkan and the GLFW library.
# Adjust the library path based on your Visual Studio version folder (e.g., lib-vc2019 or lib-vc2022)
target_link_libraries(${PROJECT_NAME} PRIVATE Vulkan::Vulkan "${GLFW_ROOT}/lib-vc2022/glfw3.lib")
