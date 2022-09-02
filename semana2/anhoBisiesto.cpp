/**
 * @file anhoBisiesto.cpp
 * @author samuelfyneweverucsp (samuel.fynewever@ucsp.edu)
 * @brief solicite un entero e imprima si representa un anho bisiesto despues de la implementacion del calendario gregoriano
 * @version 0.1
 * @date 2022-09-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

int main () {
    int anho = 0; // inicializar el valor del anho
    int bisiesto = 0; // va a ser 0 si el anho no es bisiesto, 1 si es

    cout << "Ingresa anho: " << endl;

    cin >> anho;

    if (anho < 1582) {
        cout << "Ya no estaba establecido el calendario gregoriano, asi que no puede ser anho bisiesto." << endl;
    } else if (anho % 4 == 0) {
        if (anho % 100 == 0) {
            if (anho % 400 == 0) {
                bisiesto = 1; // fue divisible por 400
            } else {bisiesto = 0;} // fue divisible por 100, pero no por 400
        } else {bisiesto = 1;} // fue divisible por 4, y no por 100
    } else {bisiesto = 0;} // no fue divisible por 4
    
    if (bisiesto == 1)
        {cout << "Es un anho bisiesto!" << endl;}
    else 
        {cout << "No es ningun anho bisiesto." << endl;}



};

