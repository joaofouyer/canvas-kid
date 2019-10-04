//
// Created by fouyer on 30/09/2019.
//
#ifndef CANVASKID_WINDOW_H
#define CANVASKID_WINDOW_H
#include <iostream>
using namespace std;

class Window {
public:
    int width;
    int height;
    char* title;
    string background;
    Window();
    Window(int width, int height, char* title, string background);
    int open(int* pargc, char** argv);
    void mainloop();
};

#endif //CANVASKID_WINDOW_H
