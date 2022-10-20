#include <iostream>

using namespace std;

int main() {

    int y = 20;
    int &ref = y;
    int* ptr = &y; // obtiene la dirección de la variable y, después asignar tal dirección a ptr

    cout << ref << endl; // 20
    ++ref;
    cout << y << endl; // 21
    *ptr = 100;
    cout << ptr << endl; // dirección de la variable y (NO HEMOS PUESTO el *, así que vamos a imprimir la dirección)
    cout << *ptr << endl; // ahora SÍ estamos usando el alias, así que va a imprimir 100

    cout << ref << endl; // 100 porque ya hemos cambiado el valor de 'y'
    


}