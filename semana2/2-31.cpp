/** @author samuelfyneweverucsp 
 * @file 2-31.cpp
 * @brief ejercicio 2.31 
 * tan chistoso es porque no he manejado regularmente en anhos **/ 

#include <iostream>

using namespace std;

int main() {
    float kmDriven{0};
    float solesCadaLitro{0};
    float kmCadaLitro{0};
    float parkingFeesPerDay{0};
    float tollsPerDay{0}; 

    float costaEnSoles{0};

    cout << "Ingresa millas que maneja: " << endl;
    cin >> kmDriven;
    cout << "Ingresa precio de gasolina en dolares cada galon; " << endl;
    cin >> solesCadaLitro; 
    cout << "Ingresa km cada litro: " << endl; 
    cin >> kmCadaLitro;
    cout << "Ingresa precio de aparcar en playas: " << endl; 
    cin >> parkingFeesPerDay; 
    cout << "Ingresa tolls: " << endl;
    cin >> tollsPerDay;

    costaEnSoles = (kmDriven / kmCadaLitro * solesCadaLitro) + parkingFeesPerDay + tollsPerDay;

    cout << "Manejar te cuesta cada dia: " << costaEnSoles << endl;

}
 