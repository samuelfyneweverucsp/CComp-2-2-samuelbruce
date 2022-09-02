/**
* Implementar un programa que solicite dos enteros
* e imprima el mayor de ambos numeros.
*
*/

#include <iostream>

using namespace std;

int main () {
    float a = 0; // primer numero declarado
    float b = 0; // segundo numero declarado
    float c = 0; // tercer numero declarado
    float mayor = 0; // va a ser el mayor de los tres

    cout << "Ingresa primer numero: " << endl;
    cin >> a; 
    cout << "Ingresa segundo numero: " << endl;
    cin >> b;
    cout << "Ingresa tercer numero: " << endl;
    cin >> c;

    if ((a > b) && (a > c)) {
        mayor = a;
    } else if ((b > a) && (b > c)) { 
        mayor = b;
    } else {
        mayor = c;
    }

    cout << "El mayor es: " << mayor << endl; 

    return 0;

};


