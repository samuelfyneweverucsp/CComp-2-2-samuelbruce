#include <iostream>
#include "Polynomial.h"

using namespace std;

int main () {
    int arr[] = {2, 0, 9, 4, 5};
    Polynomial poli1 = Polynomial(4, arr);
    int arr2[] = {0, 2, 1, 3};
    Polynomial poli2 = Polynomial(3, arr2);
    poli1.setAt(4, 17.0);
    cout << "poli1:" << endl;
    for(int j = 0; j < 5; j++) {poli1.printAt(j); cout << endl;}
    cout << "poli2:" << endl;
    for(int k = 0; k < 4; k++) {poli2.printAt(k); cout << endl;}
    cout << poli1;

}