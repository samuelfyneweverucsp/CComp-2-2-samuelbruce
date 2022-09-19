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
    for(int64_t i = 3; i <= num/2; i += 2) { // parecía que 8462696833 fuera una opción
        if(i % 3 != 0 && i % 5 != 0 && i % 7 != 0) {
            if(num % i == 0) { // i es factor de num entonces
                esCompuesto = 0;
                for(int j = 3; j <= i/2; j += 2) {
                    if (i % j == 0) { // si i es compuesto
                        esCompuesto = 1;
                        cout << "Un factor compuesto del numero:" << i << endl;
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
    
}

/* 
Output:

Un factor primo del numero:71
Un factor primo del numero:839
Un factor primo del numero:1471
Un factor primo del numero:6857
Un factor compuesto del numero:59569
Un factor compuesto del numero:104441
Un factor compuesto del numero:486847
Un factor compuesto del numero:1234169
Un factor compuesto del numero:5753023
Un factor compuesto del numero:10086647
Un factor compuesto del numero:87625999
Un factor compuesto del numero:408464633
Un factor compuesto del numero:716151937
Un factor compuesto del numero:8462696833

Lógico:
600851475143 / 8462696833 = 71. Así que no habrán más factores.
Por lo tanto, el factor primo más grande del numero es 6857, lo cual puedo verificar sin esperar que el programa terminara. 

*/
