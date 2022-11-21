#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "Polygon.h"

using std::cout;

class Triangle : public Polygon {
    protected: int width, height;
    public:
        Triangle(int x, int y): width(x), height(y) {}
        virtual int area() {return this->width * this-> height / 2;}
};

#endif