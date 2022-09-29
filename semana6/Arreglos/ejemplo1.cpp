#include <iostream>

using namespace std;

int main () {

    int arreglo[4] = {21, 65, 58, 15};
    /*arreglo[0] = 10;
    arreglo[1] = 10;
    arreglo[2] = 10;
    arreglo[3] = 7;*/

    /*cout << arreglo[0] << endl;
    cout << arreglo[1] << endl;
    cout << arreglo[2] << endl;
    cout << arreglo[3] << endl;
    cout << endl;*/

    for(int i = 0; i <= 3; i++) {
        cout << arreglo[i] << endl;
    }

    // int array[]; // ERROR porque no se puede incrementar
                    // ni decrementar su tamaño
 
    // Tampoco se puede
    // array = {1, 5, 8, 6} // solamente se puede asignar
                            // valores asi en la declaracion

    // Pero SI se puede
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; // va a comprender
                                          // que son ocho

    int arr2[4];
    cout << "Ingrese 4 valores enteros: " << endl;

    for(int i = 0; i < 4; i++) {
        cin >> arr2[i];
    }

    cout << "Los valores en el arreglo son:" << endl;

    for(int i = 0; i < 4; i++) {
        cout << " " << arr2[i];
    }

    cout << endl;

    return 0;
}