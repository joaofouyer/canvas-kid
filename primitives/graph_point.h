//
// Created by fouyer on 30/09/2019.
//

#ifndef CANVASKID_GRAPH_POINT_H
#define CANVASKID_GRAPH_POINT_H
#include "point.h"

class GraphPoint;
static GraphPoint* display;

class GraphPoint : public Point {
public:
    int size;
    string color;
    GraphPoint(int x, int y);
    GraphPoint(int x, int y, int size, char *color);
    GraphPoint find_p2(int length, int angle);
    void draw();

private:
    static void draw_callback(){
        display->draw();
    }
    void setup_draw_callback(){
        display = this;
        ::glutDisplayFunc(GraphPoint::draw_callback);
    }
};

#endif //CANVASKID_GRAPH_POINT_H