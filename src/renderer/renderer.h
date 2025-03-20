#pragma once
#include <GLFW/glfw3.h>
#include <deque>
#include <functional>
#include "instance.h"
#include "../logging/logger.h"
/**
 * @brief Vroom vroom.
 *
 */
class Engine
{
public:
    /**
     * @brief Construct a new Engine object
     *
     * @param window main window to render to
     */
    Engine(GLFWwindow *window);

    /**
     * @brief Destroy the Engine object
     *
     */
    ~Engine();

private:
    /**
     * @brief static debug logger
     *
     */
    Logger *logger{Logger::get_logger()};

    /**
     * @brief Main window
     *
     */
    GLFWwindow *window;

    /**
     * @brief Stores destructors!
     */
    std::deque<std::function<void(vk::Instance)>> deletionQueue;

    /**
     * @brief the main Vulkan instance
     */
    vk::Instance instance;

    /**
     * @brief Dispatch loader for dynamic function loading.
     */
    vk::detail::DispatchLoaderDynamic dldi;

    /**
     * @brief Vulkan debug messenger
     */
    vk::DebugUtilsMessengerEXT debugMessenger = nullptr;
};