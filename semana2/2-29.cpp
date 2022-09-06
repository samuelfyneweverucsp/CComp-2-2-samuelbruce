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

    cout << "Face length \t Surface area \t Volume" << endl;
    cout << "of cube (cm) \t of cube (cm^2) \t of cube (cm^3)" << endl;
    cout << ele0 << "\t" << 6 * ele0 * ele0 << "\t" << ele0 * ele0 * ele0 << endl;
    cout << ele1 << "\t" << 6 * ele1 * ele1 << "\t" << ele1 * ele1 * ele1 << endl;
    cout << ele2 << "\t" << 6 * ele2 * ele2 << "\t" << ele2 * ele2 * ele2 << endl;
    cout << ele3 << "\t" << 6 * ele3 * ele3 << "\t" << ele3 * ele3 * ele3 << endl;
    cout << ele4 << "\t" << 6 * ele4 * ele4 << "\t" << ele4 * ele4 * ele4 << endl;

}
 