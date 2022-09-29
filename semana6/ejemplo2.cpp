#include <iostream>
#include "Point.h"

using namespace std;

/*
Implementar una funcion que recibe dos enteros e intercambie 
los valores el uno por el otro.

Esto tenemos que hacer con un paso de referencia, no un paso
de valor (que solamente va a cambiar COPIAS de los valores 
DENTRO de la funcion ´intercambio´). 
*/

void imprimirPoint(Point p) {
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
}

void modificarPoint(int _x, int _y, Point &p) {
    p.setX(_x);
    p.setY(_y);
}

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;

}

void intercambioDePuntos(Point &p1, Point &p2) {
    Point tmp = p1;
    p1 = p2;
    p2 = tmp;
}

int main () {

    int a = 20;
    int b = 40;
    intercambio(a, b);
    cout << a << endl;
    cout << b << endl;

    Point p1(4, 5);
    Point p2(9, 2);
    imprimirPoint(p1);
    imprimirPoint(p2);
    intercambioDePuntos(p1, p2);
    imprimirPoint(p1);
    imprimirPoint(p2);

}