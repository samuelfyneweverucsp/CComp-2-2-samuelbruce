#include <iostream>
using namespace std;

int main() {
    int a{7};
    int* aPtr = &a;
    cout << "La dirección de la variable 'a' es: " << &a << "\nEl valor de aPtr es: " << aPtr << endl;
    cout << "\nEl valor de a es: " << a << "\nEl valor de *aPtr es: " << *aPtr << endl;

}