#ifndef __POINTGENERICO_H__
#define __POINTGENERICO_H__

#include <iostream>

using std::cout;

template<typename Tipo>
class Point {
       // friend std::ostream& operator<<(std::ostream&, Point);
    public:
        explicit Point(Tipo xIngresado, Tipo yIngresado) : x(xIngresado), y(yIngresado) {
            /* x = xIngresado;
            y = yIngresado; */
        }
        
        Point() : x{0}, y{0} {}

        Point(Tipo _x) : x(_x), y(3) {}

        Point(Point &o) {
            this->x = o.getX();
            this->y = o.getY();
            //std::cout << "Constructor copia" << std::endl;
        }

        ~Point() {
            //std::cout << "Destructor" << std::endl;
        }

        void setX(Tipo _x) {
            x = _x;
        }

        Tipo getX() const {
            return x;
        }

        void setY(Tipo _y) {
            y = _y;
        }

        Tipo getY() {
            return y;
        }

        void print() const {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }
/*
        Point operator+(Point& derecha) {
            Point tmp = Point(this->getX(), this->getY());
            tmp.setX(tmp.getX() + derecha.getX());
            tmp.setY(tmp.getY() + derecha.getY());
            return tmp;
        }
*/
    private:
        int x, y; 



};

template<typename Tipo>
        std::ostream& operator<<(std::ostream &output, const Point<Tipo> &pt) { // se NECESITA nombre de variable porque estamos en IMPLEMENTACION, y no se olvide el STD:: antes de ostream&
            output << "(" << pt.getX() << ", " << pt.getY() << ")" << std::endl;
            return output;
        }

#endif