#include <iostream>
#include "Point.h"

using namespace std;

void printArray(const Point array[], int tam) { // MISMO q
// void printArray(const Point *array, int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++, array++) {
        array->print();
    }
    cout << "]" << endl;
}

void printArrayRec(const Point *array, int tam) {
    if (tam <= 0) {
        return;
    }
    array->print();
    printArrayRec(++array, --tam); // TIENE Q decrementar ANTES de llamar recursivamente
}

int main () {
    Point p1;
    Point p2{12,5};
    Point p3{2,15};
    Point p4{10,0};
    Point p5{1,4};

    Point *arreglo = new Point[5];
    arreglo[1] = p1;
    arreglo[2] = p2;
    arreglo[3] = p3;
    arreglo[4] = p4;
    arreglo[5] = p5;

    printArray(arreglo, 5);
    cout << endl;

    // Point arreglo[] = {p1, p2, p3, p4, p5};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    // Point *ptr = &arreglo[0]; // EQUIVALENT TO Point *ptr = arreglo;
    Point *ptr = arreglo; // en el fondo, "arreglo" es un puntero a su primer elemento

    ptr -> print();
    cout << endl;

    for(int i = 0; i < tam; i++, ptr++) {
        ptr->print();
    }

    cout << endl;
    cout << ptr << endl;
    cout << arreglo << endl;

    ptr -> print();
    arreglo -> print();
    
    return 0;
}