/* Terminado!

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;


// Aquí hay mi primer intento...
    int i = 2803; // de anteriores outputs
    int primosEncontrados = 419;
    int actualPrimo = 523;
    int esCompuesto = 1;

    int encontrarPrimos (int i, int primosEncontrados, int primosParaEncontrar) {
        for(i = i; primosEncontrados <= primosParaEncontrar; i += 2) {
            if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 11 != 0 && i % 13 != 0 && i % 17 != 0 && i % 19 != 0
            && i % 23 != 0 && i % 29 != 0 && i % 31 != 0 && i % 37 != 0 && i % 41 != 0 && i % 43 != 0 && i % 47 != 0) {
                esCompuesto = 0;
                for(int j = 3; (j < i/2) || (esCompuesto == 1); j += 2) {
                    if (i % j == 0) {
                        esCompuesto = 1;
                        }
                } 
                if (esCompuesto == 0) {
                    primosEncontrados = primosEncontrados + 1;
                    }
            }
        }
        return i;
    }

// Después quería usar algo diferente: de https://en.wikipedia.org/wiki/Formula_for_primes ... 
int n = 1;

int64_t factorialIterativa(int n) {
    int64_t producto = 1;
    for (int i = n; i > 2; i--) {
        producto *= i;
    }
    return producto;
}

int64_t primoN(int n) {
    return(static_cast<int>(floor(factorialIterativa(n) % (n + 1))/n * (n - 1)) + 2);
}

// Pero que tonto soy... no puedo computar factorialIterativa(10001) >.<

// entonces

int main () {
    cout << encontrarPrimos(2803, 419, 10001);
    return 0;
}

/*
Ya sé que debe haber algo más eficaz. Pero no tengo ni idea de que sería. 
El primo #10001 es (de una lista https://primes.utm.edu/lists/small/100000.txt, 
y esta https://primes.utm.edu/lists/small/10000.txt): 104743
*/