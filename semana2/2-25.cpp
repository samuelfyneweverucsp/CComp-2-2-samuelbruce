/** @author samuelfyneweverucsp 
 * @file 2-25.cpp
 * @brief ejercicio 2.25 
 * Supongo que debe imprimir si los dos primeros numeros
 * son factores del TERCER numero enterado. **/ 

#include <iostream>

using namespace std;

int main() {
    int num1{0}, num2{0}, num3{0}; // numeros para ser ingresados

    cout << "Ingresa 1r entero: " << endl;
    cin >> num1;
    cout << "Ingresa 2o entero: " << endl;
    cin >> num2;
    cout << "Ingresa 3r entero: " << endl;
    cin >> num3;
    
    if (num3 % num1 == 0) {cout << "Num 1 es factor de num 3" << endl;
    } else {cout << "Num 1 no es factor de num 3" << endl;}
    if (num3 % num2 == 0) {cout << "Num 2 es factor de num 3" << endl;
    } else {cout << "Num 2 no es factor de num 3" << endl;}

}
 