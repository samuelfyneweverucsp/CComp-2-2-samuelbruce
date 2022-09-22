/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.


*/

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;



int get1 (int num) {
    return num % 10;
}

int get10(int num) {
    return (num % 100) / 10;
}

int get100(int num) {
    return (num % 1000) / 100;
}

int get1000(int num) {
    return (num % 10000) / 1000;
}

int get10000(int num) {
    return (num % 100000) / 10000;
}

int get100000(int num) {
    return (num % 1000000) / 100000;
}

// basta ya porque 999 * 999 = 998001

int main () {
    int numero = 0;
    int capicua = 9009;
    int producto = 1;
    for (int numero1 = 999; numero1 > 99; numero1--) {
        for(int numero2 = 998; numero2 > 99; numero2--) {
            producto = numero1 * numero2;
            if ((get100000(producto) == get1(producto) 
                 && (get10000(producto) == get10(producto))
                 && (get1000(producto) == get100(producto)))) {
                    capicua = producto; 
                    cout << capicua << endl; 
                    break;}
        }
    }
}

/*
906609 fue lo más grande que me dio :)
*/
