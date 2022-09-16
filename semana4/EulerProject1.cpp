/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

Sam's first method: using arithmetic sums on paper.
Second method: a for loop.
Error the first time I executed: including 1000. This resulted in an off-by-1000 error.
By changing the for loop's condition to i < (strictly less than) 1000, I obtained the result.
*/

#include <iostream>

using std::cout;
using std::endl;

int sumaDeMultiples = 0;

int main () {
    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0) {sumaDeMultiples = sumaDeMultiples + i;}
        if (i % 5 == 0) {sumaDeMultiples = sumaDeMultiples + i;}
        if (i % 15 == 0) {sumaDeMultiples = sumaDeMultiples - i;}
    }
    cout << sumaDeMultiples << endl;
    return 0;
}

// 233168