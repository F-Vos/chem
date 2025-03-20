cmake_minimum_required(VERSION 4.0)
project(chem)

# Set the C++ standard and require it
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Vulkan SDK
find_package(Vulkan REQUIRED)

# Paths to your dependencies
set(GLFW_ROOT "C:/Users/fra/Documents/programming/Libraries/glfw-3.4.bin.WIN64")
set(GLM_ROOT "C:/Users/fra/Documents/programming/Libraries/glm")
set(TINYOBJLOADER_ROOT "C:/Users/fra/Documents/programming/Libraries/tiny_obj_loader")

# Gather all your source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Create executable with your sources and tinyobjloader source file
add_executable(${PROJECT_NAME} ${SOURCES})
# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE 
    "${GLFW_ROOT}/include"
    "${GLM_ROOT}"
    "${TINYOBJLOADER_ROOT}"
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

# Link libraries
target_link_libraries(${PROJECT_NAME} PRIVATE 
    Vulkan::Vulkan 
    "${GLFW_ROOT}/lib-vc2022/glfw3.lib"
)
