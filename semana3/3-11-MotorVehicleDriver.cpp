/** @author samuelfyneweverucsp 
 * @file 
 * @brief  **/ 

#include <iostream>
#include <string>
#include "motorvehicle.h"

using namespace std;

int main() {
    std::string myMake{"Toyota"};
    std::string myFuelType{"Gasolina"};
    int myYearOfManufacture{2007};
    std::string myColor{"Plateada"};
    int myEngineCapacity{200};

    MotorVehicle tuMotorVehicle(myMake, myFuelType, myYearOfManufacture, myColor, myEngineCapacity);
    cout << "Carro predeterminado: " << endl;
    tuMotorVehicle.displayCarDetails();

    std::string tuMake;
    cout << "Ingresa tu make: " << endl;
    getline(cin, tuMake);
    tuMotorVehicle.setMake(tuMake);
    tuMotorVehicle.displayCarDetails();

    std::string tuFuelType;
    cout << "Ingresa tu fuel type: " << endl;
    getline(cin, tuFuelType);
    tuMotorVehicle.setFuelType(tuFuelType);
    tuMotorVehicle.displayCarDetails();

    int tuAnho;
    cout << "Ingresa tu anho del carro: " << endl;
    std::cin >> tuAnho;
    tuMotorVehicle.setYearOfManufacture(tuAnho);
    tuMotorVehicle.displayCarDetails();

    std::string tuColor;
    cout << "Ingresa tu color: " << endl;
    getline(cin, tuColor);
    tuMotorVehicle.setColor(tuColor);
    tuMotorVehicle.displayCarDetails();

    int tuEngineCapacity;
    cout << "Ingresa tu capacidad de engine: " << endl;
    cin >> tuEngineCapacity;
    tuMotorVehicle.setEngineCapacity(tuEngineCapacity);
    tuMotorVehicle.displayCarDetails();

    return 0;

}
