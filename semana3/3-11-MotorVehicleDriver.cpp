/** @author samuelfyneweverucsp 
 * @file 
 * @brief  **/ 

#include <iostream>
#include "motorvehicle.h"

using namespace std;

int main() {
    std::string myMake{"Toyota"};
    std::string myFuelType{"Gasolina"};
    int myYearOfManufacture{2007};
    std::string myColor{"Plateada"};
    int myEngineCapacity{200};

    MotorVehicle tuMotorVehicle(myMake, myFuelType, myYearOfManufacture, myColor, myEngineCapacity)
    cout << "Carro predeterminado:\n "
    tuMotorVehicle.displayCarDetails();

    std::string tuMake;
    cout << "Ingresa tu make: "
    getline(cin, tuMake);
    tuMotorVehicle.setMake(tuMake);
    tuMotorVehicle.displayCarDetails();

    std::string tuFuelType;
    cout << "Ingresa tu fuel type: "
    getline(cin, tuFuelType);
    tuMotorVehicle.setFuelType(tuFuelType);
    tuMotorVehicle.displayCarDetails();

    int tuAnho;
    cout << "Ingresa tu anho del carro: "
    cin << tuAnho;
    tuMotorVehicle.setYearOfManufacture(tuAnho);
    tuMotorVehicle.displayCarDetails();

    std::string tuColor;
    cout << "Ingresa tu color: "
    getline(cin, tuColor);
    tuMotorVehicle.setColor(tuColor);
    tuMotorVehicle.displayCarDetails();

    int tuEngineCapacity
    cout << "Ingresa tu capacidad de engine: "
    getline(cin, tuEngineCapacity);
    tuMotorVehicle.setEngineCapacity(tuEngineCapacity);
    tuMotorVehicle.displayCarDetails();

    return 0;

}
