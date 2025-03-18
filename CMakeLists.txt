cmake_minimum_required(VERSION 3.16)
project(chem)

# Set the C++ standard and require it
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find the Vulkan SDK (ensure your Vulkan SDK is installed and environment variables set)
find_package(Vulkan REQUIRED)

# Specify the path to your GLFW binary installation
set(GLFW_ROOT "C:/Users/fra/Documents/programming/Libraries/glfw-3.4.bin.WIN64")

# Gather all your source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Create the executable from all the source files
add_executable(${PROJECT_NAME} ${SOURCES})

# Add the GLFW include directory only to this target
target_include_directories(${PROJECT_NAME} PRIVATE "${GLFW_ROOT}/include")

# Link with Vulkan and the GLFW library.
# Adjust the library path based on your Visual Studio version folder (e.g., lib-vc2019 or lib-vc2022)
target_link_libraries(${PROJECT_NAME} PRIVATE Vulkan::Vulkan "${GLFW_ROOT}/lib-vc2022/glfw3.lib")
