/** @author samuelfyneweverucsp 
 * @file 2-30.cpp
 * @brief ejercicio 2.30 **/ 

#include <iostream>

using namespace std;

int main() {
    float pesoKg{0}; // el peso ingresado por usuario
    float alturam{0}; // el altura ingresado por usuario
    float bmi{0}; // bmi calculado
    cout << "Ingresa peso en kilos: " << endl;
    cin >> pesoKg;
    cout << "Ingresa altura en metros: " << endl; 
    cin >> alturam;
    bmi = pesoKg/(alturam * alturam);
    cout << "BMI: " << bmi << endl;
    cout << "\n\nBMI values: " << endl;
    cout << "Underweight: menos q 18.5" << endl;
    cout << "\"Normal\":  entre 18.5 y 24.9" << endl;
    cout << "Overweight:  entre 25 y 29.9" << endl;
    cout << "Obese:       30 y mas grande" << endl;

};
 