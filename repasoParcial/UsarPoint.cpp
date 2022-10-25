#include <iostream>
#include "PointRepaso.h"

using namespace std;

void ordenarArregloDePuntos(Point arreglo[], int tam) {
    int i = tam;
    
}

int main () {
    Point p1;
    Point p2 = Point(3, 4);

    p1.mostrar();
    p2.mostrar();

    Point arreglo[5] = {Point(1,2), Point(3, 24), Point (1, 5), Point(7, 2), Point(10, 20)};

    for(int i = 0; i < 5; i++) {
        arreglo[i].mostrar();
    }

}

