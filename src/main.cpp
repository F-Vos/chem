#include "backend/glfw_backend.h"
#include "logging/logger.h"
#include "renderer/renderer.h"
#include "controller/app.h"
#include <thread>
#include <atomic>

void spawn_render_thread(GLFWwindow *window, std::atomic<bool> *done)
{
    chem::Renderer *renderer = new chem::Renderer(window);

    while (!*done)
    {
        // Do work repeatedly!
    }

    delete renderer;
}

int main()
{
    chem::Logger *logger = chem::Logger::get_logger();
    logger->set_mode(true);

    int width = 800, height = 600;
    GLFWwindow *window = chem::build_window(width, height, "Chem Engine");

    std::atomic<bool> done = false;
    std::thread render_thread(spawn_render_thread, window, &done);
    chem::App *app = new chem::App(window);

    done = true;
    render_thread.join();
    glfwTerminate();
    return 0;
}