#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

using std::cout;

class Point {
    public:
        explicit Point(int xIngresado, int yIngresado) : x(xIngresado), y(yIngresado) {
            /* x = xIngresado;
            y = yIngresado; */
        }
        
        Point() : x{0}, y{0} {}

        Point(int _x) : x(_x), y(3) {}

        Point(Point &o) {
            this->x = o.getX();
            this->y = o.getY();
            //std::cout << "Constructor copia" << std::endl;
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