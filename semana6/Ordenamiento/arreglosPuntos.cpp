#include <iostream>
#include "Point.h"

using namespace std;

void inSortPunto(Point arreglo[], int n) {                    // la solucion del compadre
    int i, j;                                                 // modificado con Point
    Point key;                                                // por mí
    for (i = 1; i < n; i++){ 
        key = arreglo[i]; 
        j = i - 1;   
        while (j >= 0 && arreglo[j].getX() > key.getX())
        { 
            arreglo[j + 1] = arreglo[j]; 
            j = j - 1; 
        } 
        arreglo[j + 1] = key; 
    }
    key.setX(0);
    key.setY(0);

    for (i = 1; i < n; i++){ 
        key = arreglo[i]; 
        j = i - 1;
        if(arreglo[j].getX() >= key.getX()) {   
            while (j >= 0 && arreglo[j].getY() > key.getY())
            { 
                arreglo[j + 1] = arreglo[j]; 
                j = j - 1; 
            } 
        }
        arreglo[j + 1] = key; 
    }
}

void imprimirArregloDePuntos(Point arreglo[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++) {
        cout << "(" << arreglo[i].getX() << ", " << arreglo[i].getY() << ") ";
    }
    cout << "]" << endl;
}

int main() {
    Point p1;
    Point p2(12, 9);
    Point p3(2, 15);
    Point p4(10, 8);
    Point p5(1, 4);
    Point p6(1, 9);
    Point p7(1, 6);

    Point arregloDePuntos[] = {p1, p2, p3, p4, p5, p6, p7};
    int tam = sizeof(arregloDePuntos) / sizeof(arregloDePuntos[0]);
    imprimirArregloDePuntos(arregloDePuntos, tam);
    inSortPunto(arregloDePuntos, tam);
    imprimirArregloDePuntos(arregloDePuntos, tam);


}