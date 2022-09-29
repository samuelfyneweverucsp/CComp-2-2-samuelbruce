#include <iostream>
#include "Point.h"

using namespace std;

int suma(int a, int b) {
    return a + b;
}

void imprimirNum(int a) {
    cout << "El numero es " << a << endl;
}

void imprimirPoint(Point p) {
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
}

void modificarPoint(int _x, int _y, Point &p) {
    p.setX(_x);
    p.setY(_y);
}

int main () {
    int result = suma(5, 6);             // ta bien
    cout << suma(5, 6) << endl;          // ta bien
    // int var = imprimirNum(5) << endl; // error porque la funcion no retorna nada
    // cout << imprimirNum(5) << endl;   // tambien error
    imprimirNum(6);                      // ta bien

    Point p1(5, 6);
    imprimirPoint(p1);

    modificarPoint(7, 8, p1);
    imprimirPoint(p1);

    return 0;

}