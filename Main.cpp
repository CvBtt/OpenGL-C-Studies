#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main()
{
    // Marca o início do GLFW
    glfwInit();

    // Especifica as versões máximas e mínimas permitidas do OpenGL
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Criando a janela com largura, altura, nome e fullscreen
    GLFWwindow* window = glfwCreateWindow(800, 800, "Tutorial0", NULL, NULL);

    // Se a janela não foi criada
    if (window == NULL)
    {
        std::cout << "Failed to create Window" << std::endl;
        glfwTerminate();
        return -1;
    }

    // Define o contexto atual da janela
    glfwMakeContextCurrent(window);

    // Inicializa o OpenGL
    gladLoadGL();

    // Define a cor do buffer
    glClearColor(0.0f, 0.55f, 0.12f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);

    // Define as dimensões da janela
    glViewport(0, 0, 800, 800);

    // Mantém a janela aberta até que seja fechada
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    // Fecha a janela e termina o GLFW
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
