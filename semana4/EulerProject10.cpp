/*

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.


*/

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int64_t sumOfPrimes = 0;

int main () {
    sumOfPrimes = sumOfPrimes + (2 + 3 + 5 + 7 + 11 + 13 + 17 + 19);
    int esCompuesto = 0;

    for (int64_t i = 23; i < 2000000; i += 2) {
        if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 11 != 0 && i % 13 != 0 && i % 17 != 0 && i % 19 != 0) {
            esCompuesto = 0;
            for(int64_t j = 3; j < i/2; j += 2) {
                if (i % j == 0) {
                    esCompuesto = 1;
                    break;
                    }
            } 
            if (esCompuesto == 0) {sumOfPrimes = sumOfPrimes + i;}
        }
    }
    cout << sumOfPrimes << endl;

    return 0;

}

/*
142913828922, obtained in less than a minute
*/