/** @author samuelfyneweverucsp 
 * @file 2-24.cpp
 * @brief ejercicio 2.24 **/ 

#include <iostream>

using namespace std;

int main() {
    int numero1{0}, numero2{0};
    cout << "Ingresa 1r entero: " << endl;
    cin >> numero1;
    cout << "Ingresa 2o entero: " << endl;
    cin >> numero2;
    if (numero1 % 2 == 0) {
        cout << "Numero 1 es par" << endl;
    } else {
        cout << "Numero 1 es impar" << endl;}
    if (numero2 % 2 == 0) {
        cout << "Numero 2 es par" << endl;
    } else {
        cout << "Numero 2 es impar" << endl;}
    if ((numero1 + numero2) % 2 == 0) {
        cout << "La suma de los dos es par" << endl;
    } else {
        cout << "La suma de los dos es impar" << endl;
    }

}
 