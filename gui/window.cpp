//
// Created by fouyer on 30/09/2019.
//

#include <GL/freeglut.h>

#include <utility>
#include "window.h"

Window::Window(int width, int height, char*  title, string background):
        width(width), height(height), title(title), background(std::move(background)) {
    if (width < 0 || 1500 < width) throw std::runtime_error("You must provide a width between 0 and 1500.");
    if (height < 0 || 1500 < height) throw std::runtime_error("You must provide a height between 0 and 1500.");
}

Window::Window(): width(600), height(600), title("Canvas"){}

int Window::open(int* pargc, char** argv) {
    glutInit(pargc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(320,240);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Primeiro Programa em OpenGL - Poligonos");

    return 0;
}

void Window::mainloop() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
    glutMainLoop();
}