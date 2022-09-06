/** @author samuelfyneweverucsp 
 * @file 2-23.cpp
 * @brief ejercicio 2.23 **/ 

#include <iostream>

using namespace std;

int main() {
    int int1{0}, int2{0}, int3{0}, int4{0}, int5{0}; // inicializar 5 valores
    int mayor = 0;
    int menor = 0;

    cout << "Ingresa 1r entero: " << endl;
    cin >> int1;
    cout << "Ingresa 2o entero: " << endl;
    cin >> int2;
    cout << "Ingresa 3r entero: " << endl;
    cin >> int3;
    cout << "Ingresa 4o entero: " << endl;
    cin >> int4;
    cout << "Ingresa 5o entero: " << endl;
    cin >> int5;

    if (int1 > int2 && int1 > int3 && int1 > int4 && int1 > int5) {mayor = int1;}
    else if (int2 > int3 && int2 > int4 && int2 > int5) {mayor = int2;}
    else if (int3 > int4 && int3 > int5) {mayor = int3;}
    else if (int4 > int5) {mayor = int4;}
    else {mayor = int5;}
    if (int1 < int2 && int1 < int3 && int1 < int4 && int1 < int5) {menor = int1;}
    else if (int2 < int3 && int2 < int4 && int2 < int5) {menor = int2;}
    else if (int3 < int4 && int3 < int5) {menor = int3;}
    else if (int4 < int5) {menor = int4;}
    else {menor = int5;}

    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

}
 