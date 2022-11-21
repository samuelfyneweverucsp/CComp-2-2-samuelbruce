#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Polygon.h"

using std::cout;

class Rectangle : public Polygon {
    protected: int width, height;
    public:
        Rectangle(int x, int y): width(x), height(y) {}
        virtual int area() {return this->width * this-> height;}
};

#endif
