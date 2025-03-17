#include "renderer.h"

namespace chem
{
    Renderer::Renderer(GLFWwindow *window) : window(window)
    {

        logger = Logger::get_logger();
        logger->print("Made a graphics engine");
    }

    Renderer::~Renderer()
    {

        logger->print("Goodbye see you!");
    }
} // namespace chem
