/** @author samuelfyneweverucsp 
 * @file 
 * @brief  **/ 

#include <string>
#include <iostream>
#include "motorvehicle.h"

using namespace std;

int main() {
    std::string myMake = "Toyota";
    std::string myFuelType = "Gasolina";
    int myYearOfManufacture = 2007;
    std::string myColor = "Plateada";
    int myEngineCapacity = 200;

    MotorVehicle tuMotorVehicle(myMake, myFuelType, myYearOfManufacture, myColor, myEngineCapacity);
    cout << "Carro predeterminado: " << std::endl;
    tuMotorVehicle.displayCarDetails();

    std::string tuMake = "";
    cout << "Ingresa tu make: " << std::endl;
    getline(std::cin, tuMake);
    tuMotorVehicle.setMake(tuMake);
    tuMotorVehicle.displayCarDetails();

    std::string tuFuelType = "";
    cout << "Ingresa tu fuel type: " << std::endl;
    getline(std::cin, tuFuelType);
    tuMotorVehicle.setFuelType(tuFuelType);
    tuMotorVehicle.displayCarDetails();

    int tuAnho = 2000;
    cout << "Ingresa tu anho del carro: " << std::endl;
    std::cin >> tuAnho;
    tuMotorVehicle.setYearOfManufacture(tuAnho);
    tuMotorVehicle.displayCarDetails();

    std::string tuColor;
    cout << "Ingresa tu color: " << std::endl;
    getline(std::cin, tuColor);
    tuMotorVehicle.setColor(tuColor);
    getline(std::cin, tuColor);
    tuMotorVehicle.setColor(tuColor);
    tuMotorVehicle.displayCarDetails();

    int tuEngineCapacity;
    cout << "Ingresa tu capacidad de engine: " << std::endl;
    std::cin >> tuEngineCapacity;
    tuMotorVehicle.setEngineCapacity(tuEngineCapacity);
    tuMotorVehicle.displayCarDetails();

    return 0;

}
