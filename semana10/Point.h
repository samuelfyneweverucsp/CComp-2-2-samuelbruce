#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

using std::cout;

class Point {
    public:
        Point(int _x, int _y) : x(_x), y(_y) {
            x = _x;
            y = _y;
            //std::cout << "Constructor" << std::endl;
        }

        Point() {
            //std::cout << "Constructor sin argumentos" << std::endl;
            x = 0;
            y = 0;
        }

        ~Point() {
            //std::cout << "Destructor" << std::endl;
        }

        void setX(int _x) {
            x = _x;
        }

        int getX() {
            return x;
        }

        void setY(int _y) {
            y = _y;
        }

        int getY() const {
            return y;
        }

        void print() const {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }

    private:
        int x, y; 

};

#endif