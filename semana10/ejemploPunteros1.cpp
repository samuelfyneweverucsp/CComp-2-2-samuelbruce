#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point p1{1, 2};

    Point *pPtr = new Point(8,9);
    Point *pPtr2 = &p1;

    if(true) {
        Point p2{5, 6};
        p2.print();
    }

    p1.print(); // PUNTO para acceder a métodos de OBJETOS 
    pPtr->print(); // FLECHITITA para acceder a métodos de punteros
    pPtr2->print();

    delete pPtr;
    delete pPtr2;

    return 0;
}

