#include <iostream>

using namespace std;

int main() {
    int y = 20;
    int* yPtr;
    yPtr = &y;

    cout << yPtr << endl; // imprime la dirección de la variable y
    cout << *yPtr << endl;
    *yPtr = 500;
    cout << yPtr << endl;
    cout << y << endl;

    int x = 100;
    yPtr = &x;

    cout << yPtr << endl; // imprime la dirección de la variable x
    cout << *yPtr << endl;
    *yPtr = 300;
    cout << yPtr << endl;
    cout << *yPtr << endl;

}