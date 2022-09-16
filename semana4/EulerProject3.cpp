/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?


*/

#include <iostream>
#include <cmath>

using namespace std;

int64_t num = 600851475143;
int64_t factorPrimo = 1;
int esPrimo = 0;
int esCompuesto = 0;
int64_t i = 2;

int main () {
    for(int64_t i = 8462696833; i <= num/2; i++) { // ya se que 8462696833 es una opcion
        if(num % i == 0) { // i es factor de num entonces
            esCompuesto = 0;
            for(int j = 1; j <= i/2 || esCompuesto == 1; j++) {
                if (i % j == 0) { // si i es compuesto
                    esCompuesto == 1;
                    break;
                }
            } // despues de averiguarlos todos
            if (esCompuesto == 0) { // no es compuesto, asi que es primo
                factorPrimo = i;
                cout << "Un factor primo del numero:" << factorPrimo << endl;
            }
        }
    }
    
}

/*
Output de la primera vez que lo hice:
Un factor primo del numero:71
Un factor primo del numero:839
Un factor primo del numero:1471
Un factor primo del numero:6857
Un factor primo del numero:59569
Un factor primo del numero:104441
Un factor primo del numero:486847
Un factor primo del numero:1234169
Un factor primo del numero:5753023
Un factor primo del numero:10086647
Un factor primo del numero:87625999
Un factor primo del numero:408464633
Un factor primo del numero:716151937
Un factor primo del numero:-716151937
Un factor primo del numero:-408464633
Un factor primo del numero:-87625999
Un factor primo del numero:-10086647
Un factor primo del numero:-5753023
Un factor primo del numero:-1234169
Un factor primo del numero:-486847
Un factor primo del numero:-104441
Un factor primo del numero:-59569
Un factor primo del numero:-6857
Un factor primo del numero:-1471
Un factor primo del numero:-839
Un factor primo del numero:-71
Un factor primo del numero:-1

porque i fue int... no int64_t
*/