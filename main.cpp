#include "gui/window.h"
#include "primitives/graph_point.h"

int main(int argc, char** argv){
    Window w;
    w.open(&argc, argv);
    GraphPoint p1(0, 0);
    GraphPoint p2(2, 2);;
    GraphPoint p3 = p1.find_p2(10, 90);
    p1.draw();
    p2.draw();
    w.mainloop();

}