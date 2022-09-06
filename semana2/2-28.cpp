// Ejercicio 2.28, Samuel Fynewever

#include <iostream>

using namespace std;

int main () {
    int numero = 0; // el entero entrado por usuario, debe ser de 5 digitos

    int digito1 = 0; // el primer digito de numero
    int digito2 = 0; // segundo digito de numero
    int digito3 = 0; // tercer digito de numero
    int digito4 = 0; // cuarto digito de numero

    cout << "Ingresa numero de 4 digitos: " << endl;
    cin >> numero; // debe ser de 4 digitos 
    if (numero > 9999) {cout << "No son de 4 digitos" << endl;}
    else {
        digito1 = numero % 10;
        digito2 = numero % 100 - digito1;
        digito3 = numero % 1000 - numero % 100;
        digito4 = numero % 10000 - numero % 1000;

        cout << "Los digitos, al reves, son:" << digito4 << "  " << digito3 << "  "
        << digito2 << "  " << digito1 << "  " << endl;
    }
}
