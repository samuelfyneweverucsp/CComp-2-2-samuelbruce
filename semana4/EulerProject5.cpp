/* Terminado!


2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

Necesita ser el producto de 9, y de 5, y de 7, y de 16, y de 11, y de 13, y de 17, y de 19. 

Entonces será multiple de:
3^2, 2^4, 5, y los otros primos grandes
por lo tanto será multiple de:
2, 3, 4 (2^2), 5, 6 (2*3), 7, 8 (2^3), 9, 10, 11, 12 (2^2 * 3), 13, 14 (7*2), y 15, y 16, y 17, y 18 (3^2 * 2), y 19, y 20
(2^2 * 5).
No necesito bucle.
*/

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main () {
    cout << 9*5*7*16*11*13*17*19 << endl;
}

/*
232792560
*/
