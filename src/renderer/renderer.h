#pragma once
#include <GLFW/glfw3.h>
#include "../logging/logger.h"

/**
 * @brief Vroom vroom.
 *
 */
namespace chem
{
    class Renderer
    {

    public:
        /**
         * @brief Construct a new Engine object
         *
         * @param window main window to render to
         */
        Renderer(GLFWwindow *window);

        /**
         * @brief Destroy the Engine object
         *
         */
        ~Renderer();

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
    };
} // namespace chem
