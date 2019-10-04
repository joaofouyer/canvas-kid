//
// Created by fouyer on 30/09/2019.
//
#include "graph_point.h"

GraphPoint::GraphPoint(int x, int y) : Point(x, y), size(1), color("#000000"){}

GraphPoint::GraphPoint(int x, int y, int size, char *color) : Point(x, y), size(size), color(color) {
    if (size < 0) throw std::runtime_error("You must provide a valid size for a GraphPoint.");
}

void GraphPoint::draw() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glVertex2f(x,y);
    glEnd();
    glutSwapBuffers();
    setup_draw_callback();
}

GraphPoint GraphPoint::find_p2(int length, int angle) {
    int abscissa = (int)lround(x + cos(angle * PI / 180.0) * length);
    int ordinate = (int)lround(y + sin(angle * PI / 180.0) * length);
    return GraphPoint(abscissa, ordinate);
}

