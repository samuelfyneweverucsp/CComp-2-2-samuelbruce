/** @author samuelfyneweverucsp 
 * @file 2-27.cpp
 * @brief ejercicio 2.27 **/ 

#include <iostream>

using namespace std;

int main() {
    char myChar{'a'};
    int num1{0};
    cout << "Ingresa caracter: " << endl;

    std::cin >> myChar;

    cout << "Su codigo ASCII es: " << static_cast<int>(myChar) << endl;

};
 