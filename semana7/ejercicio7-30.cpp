/*
7.30 (Print an array) Write a recursive function printArray that takes an array, 
a starting subscript and an ending subscript as arguments, 
returns nothing and prints the array. The function
should stop processing and return when the starting subscript equals the ending subscript.
*/

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

void printArray(int arreglo[], int subBegin, int subEnd);

int main () {
    int miArreglo[] = {1, 2, 3, 4, 5};
    int miPrincipio = 2;
    int miFin = 4;
    printArray(miArreglo, miPrincipio, miFin);
}

void printArray(int arreglo[], int subBegin, int subEnd) {
    for (int i = subBegin; i <= subEnd; i++) {
        cout << arreglo[i] << " " << endl;
    }
}

// g++ -std=c++11 FILENAME