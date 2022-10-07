// Fig. 7.21: fig07_21.cpp
// Demonstrating C++ Standard Library class template vector.
#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <stdexcept>

using namespace std;
using std::cout;

int tam = 0;

void outputArray(const array<int, tam>&); // display the vector
void inputArray(array<int, tam>&); // input values into the vector

int main() {
    array<int, 7> integers1; // 7-element array<int>
    array<int, 10> integers2; // 10-element array<int>

    // print integers1 size and contents
    cout << "Size of vector integers1 is " << integers1.size()
    << "\nvector after initialization:";
    outputVector(integers1);

    // print integers2 size and contents
    cout << "\nSize of vector integers2 is " << integers2.size()
    << "\nvector after initialization:";
    outputVector(integers2);

    // input and print integers1 and integers2
    cout << "\nEnter 17 integers:" << endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "\nAfter input, the vectors contain:\n"
    << "integers1:";
    outputVector(integers1);
    cout << "integers2:";
    outputVector(integers2);

    // use inequality (!=) operator with vector objects
    cout << "\nEvaluating: integers1 != integers2" << endl;

    if (integers1 != integers2) {
        cout << "integers1 and integers2 are not equal" << endl;
    }

    // create vector integers3 using integers1 as an
    // initializer; print size and contents

    vector<int> integers3{integers1}; // copy constructor

    cout << "\nSize of vector integers3 is " << integers3.size()
    << "\nvector after initialization: ";
    outputVector(integers3);

    // use overloaded assignment (=) operator
    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2; // assign integers2 to integers1

    cout << "integers1: ";
    outputVector(integers1);
    cout << "integers2: ";
    outputVector(integers2);

    // use equality (==) operator with vector objects
    cout << "\nEvaluating: integers1 == integers2" << endl;
    if (integers1 == integers2) {
        cout << "integers1 and integers2 are equal" << endl;
    }

     // use square brackets to use the value at location 5 as an rvalue
    cout << "\nintegers1[5] is " << integers1[5];

    // use square brackets to create lvalue
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;

    cout << "integers1: ";
    outputVector(integers1);

    // attempt to use out-of-range subscript
    try {
     cout << "\nAttempt to display integers1.at(15)" << endl;
     cout << integers1.at(15) << endl; // ERROR: out of range
    }
    catch (out_of_range& ex) {
     cerr << "An exception occurred: " << ex.what() << endl;
    } 

    // changing the size of a vector
    cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
    integers3.push_back(1000); // add 1000 to the end of the vector
    cout << "New integers3 size is: " << integers3.size() << endl;
    cout << "integers3 now contains: ";
    outputVector(integers3);
}

    // output vector contents
void outputVector(const vector<int> & items) {
    for (int item : items) {
        cout << item << " ";
    }
    cout << endl;
}

// input vector contents
void inputVector(vector<int>& items) {
    for (int& item : items) {
        cin >> item;
    }
} 
