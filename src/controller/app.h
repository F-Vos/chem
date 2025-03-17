#pragma once
#include "../logging/logger.h"
#include <GLFW/glfw3.h>

namespace chem
{
    class App
    {
    public:
        /**
         * @brief Construct a new app
         *
         * @param window The main window for the program
         */
        App(GLFWwindow *window);

    private:
        /**
         * @brief run the program
         */
        void main_loop();

        /**
         * @brief the main window for the program
         */
        GLFWwindow *window;

        /**
         * @brief static debug logger
         */
        Logger *logger;
    };
} // namespace chem
/**
 * @brief The main program.
 */
