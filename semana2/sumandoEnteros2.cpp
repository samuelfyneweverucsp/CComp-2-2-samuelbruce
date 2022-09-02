#include <iostream>

using namespace std;

/*
Es un programa que recibe dos enteros por teclado
e imprime la suma de ambos.
*/

int main () {
    // declarando dos variables de tipo entero
    int a = 20;
    int b = 10;

    cout << "Ingrese primer entero: "; 
    cin >> a; // ingresar primer entero

    cout << "Ingrese segundo entero: ";
    cin >> b; // ingresar segundo entero

    int suma = a + b; // sumarlos

    cout << "La suma es: " << suma << endl; // imprimir el suma

    return 0; // todo termina correctamente
} // fin de main()
