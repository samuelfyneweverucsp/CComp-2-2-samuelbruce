#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

using std::cout;
using std::endl;

class Point {
    friend std::ostream& operator<<(std::ostream&, Point);
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

inline std::ostream& operator<<(std::ostream& output, Point pt) { // se NECESITA nombre de variable porque estamos en IMPLEMENTACION, y no se olvide el STD:: antes de ostream&
    output << "(" << pt.getX() << ", " << pt.getY() << ")" << endl;
    return output;
}

#endif