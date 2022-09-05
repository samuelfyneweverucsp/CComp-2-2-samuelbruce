/**
 * @file circulos.cpp
 * @author samuelfyneweverucsp (samuel.fynewever@ucsp.edu.pe)
 * @brief dado el radio de un circulo, imprime su diametro, circunferencia, y area
 * @version 0.1
 * @date 2022-09-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

int main () {
    int radio = 0; // radio de un circulo dado por usuario

    cout << "Ingresa radio del circulo:" << endl;
    cin >> radio;
    cout << "Diametro del circulo: " << radio * 2; << "\nCircunferencia del circulo: " << radio * 2 * 3.14159; << "\nArea del circulo: " << radio * radio * 3.14159; << endl;


}
