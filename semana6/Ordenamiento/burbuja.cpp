#include <iostream>

using namespace std;

/*
Implementar el método de ordenamiento Burbuja e implementarlo
para ordenar un arreglo de enteros
*/

void intercambiarValores(int &int1, int &int2) {
    int tmp = int1;
    int1 = int2;
    int2 = tmp;
}

void ordenarArregloBurbuja(int arreglo[], int tam) {
    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < tam - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                intercambiarValores(arreglo[j], arreglo[j + 1]);
            }
        }
    }
    
}

void ordenarArregloInsercion(int arreglo[], int tam) {
    for(int i = 1; i < tam; i++) {
        int valorActual = arreglo[i];
        for(int j = i - 1; (j > 0 && valorActual > arreglo[j]); j--) {
            intercambiarValores(arreglo[j], arreglo[j - 1]);
        }
    }
}

void imprimirArreglo(int arreglo[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout << "]" << endl;
}



int main () {

    int arreglo[] = {21, 65, 98, 15};
    ordenarArregloBurbuja(arreglo, 4);
    imprimirArreglo(arreglo, 4);
    int arreglo2[] = {4, 2, 7, 1, 9};
    ordenarArregloInsercion(arreglo2, 5);
    imprimirArreglo(arreglo2, 5);
    

    return 0;
}