#include <iostream>
#include <glad/gl.h>
#include <GLFW/glfw3.h>

int main()
{
    glfwInit();                                    // initializing glfw
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // telling opengl the version of opengl we are using
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); // choosing between core or
                                                                   // compatibility profile

    GLFWwindow *window = glfwCreateWindow(800, 800, "window 1", NULL, NULL); // glfwCreate window takes
                                                                             // parameters width, height, name, fullscreen or not and one more parameter

    glfwTerminate();
    return 0;
}