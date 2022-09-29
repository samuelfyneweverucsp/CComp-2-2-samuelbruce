/**
 * @file EulerProject2.cpp
 * @author samuelfyneweverucsp
 * @brief Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
 * @brief Solution: write a function that *explicitly* returns the values of the fibonacci sequence (recursivity works but it's slower)
 * then take each term, check for evenness, and if even, add it
 */

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

    double rt5 = sqrt(5);
    double alpha1 = (1 + rt5)/2;
    double alpha2 = (1 - rt5)/2;

    int sumaDeParesFibonaccis = 0;

int fibonacci(int n) {
    return(static_cast<int>(round((pow(alpha1, n+1) - pow(alpha2, n+1))/rt5))); // n + 1 para que cuando n = 2, ya obtenemos 2 en vez de 1
};

int main () {
    cout << "Los tres primeros Fibonaccis:" << endl;
    cout << fibonacci(1) << endl;
    cout << fibonacci(2) << endl;
    cout << fibonacci(3) << endl;
    int i = 2;
    cout << "Los fibonaccis pares que son menores que 4000000:" << endl;
    for (i = 2; fibonacci(i) <= 4000000; i = i + 1) {
        if (fibonacci(i) % 2 == 0) {
            cout << fibonacci(i) << endl;
            sumaDeParesFibonaccis = sumaDeParesFibonaccis + fibonacci(i);
        }
    }
    cout << "Suma de los fibonaccis pares que son <= 4000000: " << sumaDeParesFibonaccis << endl;
}

// 2237542