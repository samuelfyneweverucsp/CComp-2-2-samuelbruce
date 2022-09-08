/** @author samuelfyneweverucsp 
 * @file 2-29.cpp
 * @brief ejercicio 2.29 **/ 

#include <iostream>

using namespace std;

int main() {
    int ele0{0};
    int ele1{1};
    int ele2{2};
    int ele3{3};
    int ele4{4}; // se podria ingresar varlores diferentes

    cout << "Face length \tSurface area \tVolume" << endl;
    cout << "of cube (cm) \tof cube (cm^2) \tof cube (cm^3)" << endl;
    cout << ele0 << "\t\t" << 6 * ele0 * ele0 << "\t\t" << ele0 * ele0 * ele0 << endl;
    cout << ele1 << "\t\t" << 6 * ele1 * ele1 << "\t\t" << ele1 * ele1 * ele1 << endl;
    cout << ele2 << "\t\t" << 6 * ele2 * ele2 << "\t\t" << ele2 * ele2 * ele2 << endl;
    cout << ele3 << "\t\t" << 6 * ele3 * ele3 << "\t\t" << ele3 * ele3 * ele3 << endl;
    cout << ele4 << "\t\t" << 6 * ele4 * ele4 << "\t\t" << ele4 * ele4 * ele4 << endl;

}
 