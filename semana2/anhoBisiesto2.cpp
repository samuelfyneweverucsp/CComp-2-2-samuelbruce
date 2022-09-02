/**
 * @file anhoBisiesto.cpp
 * @author samuelfyneweverucsp (samuel.fynewever@ucsp.edu)
 * @brief solicite un entero e imprima si representa un anho bisiesto despues de la implementacion del calendario gregoriano
 * @version esta version no funciona bien, necesito barritas para poner "or"
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
    int divisiblePor4 = 1;
    int divisiblePor100 = 0;
    int divisiblePor400 = 0;

    cout << "Ingresa anho: " << endl;

    cin >> anho;

    if (anho < 1582) {
        cout << "Ya no estaba establecido el calendario gregoriano, asi que no puede ser anho bisiesto." << endl;
    } else {
        if (anho % 4 != 0) {
            divisiblePor4 = 0;

        } else if (anho % 100 == 0) {
            divisiblePor100 = 1;
            if (anho % 400 == 0) {
                divisiblePor400 = 1;
            }
        }
        
    }
    
    if (divisiblePor4 == 1 && divisiblePor100 == 1) { // necesito barritas aca, esta version no funciona
        bisiesto = 1;
    }

    if (bisiesto == 1)
        cout << "Es un anho bisiesto!" << endl;
    else 
        cout << "No es ningun anho bisiesto." << endl;



};

