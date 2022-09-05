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
    int numero = 0; // el entero entrado por usuario, debe ser de 5 digitos

    int digito1 = 0; // el primer digito de numero
    int digito2 = 0; // segundo digito de numero
    int digito3 = 0; // tercer digito de numero
    int digito4 = 0; // cuarto digito de numero
    int digito5 = 0; // quinto digito de numero

    cout << "Ingresa numero de 5 digitos: " << endl;
    cin >> numero; // debe ser de 5 digitos 
    if (numero > 99999) {cout << "No son de 5 digitos" << endl;}
    else {
        digito1 = numero % 10;
        digito2 = numero % 100 - digito1;
        digito3 = numero % 1000 - numero % 100;
        digito4 = numero % 10000 - numero % 1000;
        digito5 = numero - numero % 10000;

        cout << "Los digitos son:" << digito1 << " " << digito2 << " "
        << digito3 << " " << digito4 << " " << digito5 << endl;
    }

};

