/** @author samuelfyneweverucsp 
 * @file 
 * @brief  **/ 

#include <iostream>

using std::string;
using std::cout;

class MotorVehicle {
    private:
        std::string make{""};
        std::string fuelType{""};
        int yearOfManufacture{2000};
        std::string color{""};
        int engineCapacity{0};

    public:
        explicit MotorVehicle(std::string inicialMake, 
                              std::string inicialFuelType,
                              int inicialYearOfManufacture,
                              std::string inicialColor,
                              int inicialEngineCapacity) {
                                make = inicialMake;
                                fuelType = inicialFuelType;
                                yearOfManufacture = inicialYearOfManufacture;
                                color = inicialColor;
                                engineCapacity = inicialEngineCapacity;
                              }
        
        std::string getMake() {
            return make;
        };

        std::string getFuelType() {
            return fuelType;
        };

        int getYearOfManufacture() {
            return yearOfManufacture;
        };

        std::string getColor() {
            return color;
        };

        int getEngineCapacity() {
            return engineCapacity;
        }

        void setMake(std::string nuevoMake) {
            make = nuevoMake;
        }

        void setFuelType(std::string nuevoFuelType) {
            fuelType = nuevoFuelType;
        }

        void setYearOfManufacture(int nuevoYearOfManufacture) {
            yearOfManufacture = nuevoYearOfManufacture;
        }

        void setColor(std::string nuevoColor) {
            color = nuevoColor;
        }

        void setEngineCapacity(int nuevoEngineCapacity) {
            engineCapacity = nuevoEngineCapacity;
        }

        void displayCarDetails() {
            std::cout << "make: " << make << endl;
            std::cout << "fuelType: " << fuelType << endl;
            std::cout << "yearOfManufacture: " << yearOfManufacture << endl;
            std::cout << "color: " << color << endl;
            std::cout << "engineCapacity: " << engineCapacity << endl;
        }

};
 