//
// Created by fouyer on 30/09/2019.
//

#include <cmath>
#include <GL/glut.h>
#include <iostream>

using namespace std;
#ifndef CANVASKID_POINT_H
#define CANVASKID_POINT_H
#define PI 3.14159265

class Point {
public:
    int x;
    int y;
    Point(int x, int y);

    Point find_p2(int length, int angle);
    int get_coordinates();
    void print_atributes();
};


#endif //CANVASKID_POINT_H
