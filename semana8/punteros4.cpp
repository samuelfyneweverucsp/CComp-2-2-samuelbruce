#include <iostream>
using namespace std;

int cuboPorValor(int);
int cuboPorRefConPtr(int*);

// Implementar el intercambio de valores de dos numeros usando punteros

void intercambioConPunteros(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int num{5};

    cout << "El valor original del numero es: " << num << endl;

    cuboPorRefConPtr(&num); // necesitamos sacar tal DIRECCIÓN

    cout << "El valor después de cubar por referencia: " << num << endl;

    int x = 25;
    int y = 45;
    int* xPtr = &x;
    int* yPtr = &y;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    intercambioConPunteros(xPtr, yPtr);
    cout << "Después de intercambiar..." << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

}

int cuboPorRefConPtr(int* nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr;
}


