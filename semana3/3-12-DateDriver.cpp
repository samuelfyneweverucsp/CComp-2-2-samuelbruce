/** @author samuelfyneweverucsp 
 * @file 
 * @brief  **/ 

#include <iostream>
#include "date.h"

using namespace std;

int main() {
    int fechaNueva{1};
    cout << "Ingrese fecha (numero del dia del mes): " << endl;
    cin >> fechaNueva;


    cout << "Ingrese numero del mes: " << endl;
    int mesNueva{1};
    cin >> mesNueva;


    cout << "Ingrese numero del anho: " << endl;
    int anhoNuevo;
    cin >> anhoNuevo;

    Date ourDate(fechaNueva, mesNueva, anhoNuevo)
    ourDate.mostrarFecha();
    return 0;
}
 
