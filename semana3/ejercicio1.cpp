#include <iostream>

using namespace std;

/**
 * Implemente un programa que reciba un caracter
 * e indique si es una letra, ya sea mayuscula o
 * minuscula
 */

int main() {
    
    char mychar;

    cout << "Ingrese un caracter: ";
    cin >> mychar;

    int codigoDeChar{static_cast<int>(mychar)};

    if ((codigoDeChar >= 41) && (codigoDeChar <= 90)) {
        cout << "es letra mayuscula";
    } else if ((codigoDeChar >= 97) && (codigoDeChar <= 122)) {
        cout << "es letra minuscula";
    } else {
        cout << "no es letra";
    }

    return 0;
}