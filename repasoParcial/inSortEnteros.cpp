#include <iostream>

using namespace std;

void bSortArreglo(int arreglo[], int tam);

void iSortArreglo(int arreglo[], int tam);

void imprimirArreglo(int arreglo[], int tam);

int main () {
    int valores[10] = {9, 8, 7, 4, 5, 3, 2, 1, 0, -1};
    imprimirArreglo(valores, sizeof(valores)/sizeof(valores[0]));
    bSortArreglo(valores, sizeof(valores)/sizeof(valores[0]));
    imprimirArreglo(valores, sizeof(valores)/sizeof(valores[0]));
    int valores2[10] = {4, 6, 2, 7, 0, 18, 8, 9, -1, -3};
    imprimirArreglo(valores2, 10);
    iSortArreglo(valores2, 10);
    imprimirArreglo(valores2, 10);

}

void intercambiarEnteros(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void imprimirArreglo(int arreglo[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++) {
        cout << arreglo[i] << ", ";
    }
    cout << "]" << endl;
}

void bSortArreglo(int arreglo[], int tam) {
    
    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < (tam - 1); j++) {
            if(arreglo[j] > arreglo[j + 1]) {
                intercambiarEnteros(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}

void iSortArreglo(int arreglo[], int tam) {
    for(int i = 1; i < tam; i++) {
        for(int j = i; (j > 0 && arreglo[j - 1] > arreglo[j]); j--) {
            intercambiarEnteros(arreglo[j], arreglo[j - 1]);
        }
    }
}