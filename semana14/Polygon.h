#ifndef __POLYGON_H__
#define __POLYGON_H__

#include <iostream>

using std::cout;

class Polygon {
    protected:
        int height, width;
    public:
        Polygon() : width(0), height(0) {}
        Polygon (int a, int b) : width(a), height(b) {}

        virtual int area() = 0;

        void printarea() {std::cout << this-> area() << '\n';}
        void printwidth() {cout << this->width << '\n';}
        void printheight() {cout << this->height << 'n';}
};


#endif