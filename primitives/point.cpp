//
// Created by fouyer on 30/09/2019.
//

#include "point.h"
#include <cmath>

Point Point::find_p2(int length, int angle) {
    int abscissa = (int)lround(x + cos(angle * PI / 180.0) * length);
    int ordinate = (int)lround(y + sin(angle * PI / 180.0) * length);
    return Point(abscissa, ordinate);
}

int Point::get_coordinates() {
    return x, y;
}

Point::Point(int x, int y): x(x), y(y){

}

void Point::print_atributes() {
    cout << "x:" << x << endl;
    cout << "y:" << y << endl;
}
