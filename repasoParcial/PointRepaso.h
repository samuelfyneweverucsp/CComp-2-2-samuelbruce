#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>
#include <cmath>

class Point {
    public:
        explicit Point(int xIngresado, int yIngresado) : x{xIngresado}, y{yIngresado} {
            x = xIngresado;
            y = yIngresado;
        }
        Point() : x{0}, y{0} {}

        double getX() const {
            return x;
        }

        double getY() const {
            return y;
        }

        void setX(double xIngresado) {
            x = xIngresado;
        }

        void setY(double yIngresado) {
            y = yIngresado;
        }

        void mostrar() const {
            std::cout << "(" << getX() << ", " << getY() << ")" << std::endl; 
        }

    private:
        double x;
        double y;
};

#endif