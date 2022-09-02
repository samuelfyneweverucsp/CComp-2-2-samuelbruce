/**
 * @file imprimirPorDigitos.cpp
 * @author samuelfyneweverucsp (samuel.fynewever@ucsp.edu)
 * @brief solicite por teclado un entero de 5 digitos e imprima cada digito uno por uno, p.ej. 12345 => debe imprimir 1 2 3 4 5
 * @version 0.1
 * @date 2022-09-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

int main () {
    int numero = 0;

    int digito1 = 0;
    int digito2 = 0;
    int digito3 = 0;
    int digito4 = 0;
    int digito5 = 0;

    cout << "Ingresa numero de 5 digitos: " << endl;
    cin >> numero; // debe ser de 5 digitos
    if (numero < 10000) {cout << "No son de 5 digitos" << endl;}
    else {
        digito1 = numero % 10;
        digito2 = numero % 100 - digito1;
        digito3 = numero % 1000 - numero % 100;
        digito4 = numero % 10000 - numero % 1000;
        digito5 = numero % 100000 - numero % 10000;
    }

};

