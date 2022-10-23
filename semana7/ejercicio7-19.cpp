// Fig. 7.21: fig07_21.cpp
// Demonstrating C++ Standard Library class template vector.
// Ejercicio 7.19: reducirlo a arreglos,
// descartando todo que un VECTOR puede hacer, pero un ARRAY no puede. 

#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <stdexcept>

using namespace std;
using std::cout;

size_t tam = 0;

void outputArray(int arreglo[]); // display the vector
void inputArray(int arreglo[]); // input values into the vector

int main() {
    int integers1[7]; // 7-element array<int>
    int integers2[10]; // 10-element array<int>

    // print integers1 size and contents
    cout << "Size of array integers1 is " << sizeof(integers1)/sizeof(integers1[0])
    << "\nvector after initialization:";
    outputArray(integers1);

    // print integers2 size and contents
    cout << "\nSize of array integers2 is " << sizeof(integers2)/sizeof(integers2[0])
    << "\nvector after initialization:";
    outputArray(integers2);

    // input and print integers1 and integers2
    cout << "\nEnter 17 integers:" << endl;
    inputArray(integers1);
    inputArray(integers2);

    cout << "\nAfter input, the arrays contain:\n"
    << "integers1:";
    outputArray(integers1);
    cout << "integers2:";
    outputArray(integers2);

    // use inequality (!=) operator with vector objects: no se puede
    /*cout << "\nEvaluating: integers1 != integers2" << endl;

    if (integers1 != integers2) {
        cout << "integers1 and integers2 are not equal" << endl;
    }
    */
    // create vector integers3 using integers1 as an
    // initializer; print size and contents - no se puede con arrays

    // vector<int> integers3{integers1}; // copy constructor — no se existe con ARRAYS

    /* cout << "\nSize of vector integers3 is " << integers3.size()
    << "\nvector after initialization: ";
    outputVector(integers3);
    */ 
    // use overloaded assignment (=) operator with ARRAYS: no se puede 
    /*
    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2; // assign integers2 to integers1
    */
    cout << "integers1: ";
    outputArray(integers1);
    cout << "integers2: ";
    outputArray(integers2);

    // use equality (==) operator with arrays objects: no se debe
    /*
    cout << "\nEvaluating: integers1 == integers2" << endl;
    if (integers1 == integers2) {
        cout << "integers1 and integers2 are equal" << endl;
    }
    */

     // use square brackets to use the value at location 5 as an rvalue
    cout << "\nintegers1[5] is " << integers1[5];

    // use square brackets to create lvalue
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;

    cout << "integers1: ";
    outputArray(integers1);

    // attempt to use out-of-range subscript: no va a funcionar; o sea, va a retornar valores basuros
    try {
     cout << "\nAttempt to display integers1.at(15)" << endl;
     cout << integers1[15] << endl; // no hay ERROR: out of range -- va a retornar un valor basuro
    }
    catch (out_of_range& ex) {
     cerr << "An exception occurred: " << ex.what() << endl;
    } 

    // changing the size of an ARRAY -- tampoco se puede
    /*
    cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
    integers3.push_back(1000); // add 1000 to the end of the vector
    cout << "New integers3 size is: " << integers3.size() << endl;
    cout << "integers3 now contains: ";
    outputVector(integers3);
    */
}

    // output vector contents
void outputArray(int arreglo[]) {
    int tam = sizeof(arreglo)/sizeof(arreglo[0]);
    for(int i = 0; i <= tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

// input vector contents
void inputArray(int arreglo[]) {
    int tam = sizeof(arreglo)/sizeof(arreglo[0]);
    for (int i = 0; i <= tam; i++) {
        cin >> arreglo[i];
    }
} 
