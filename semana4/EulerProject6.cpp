/* Terminado!

The sum of the squares of the first ten natural numbers is 1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is (1 + 2 + ... + 10)^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

Solution: 1^2 + 2^2 + ... + n^2 = n*(n+1)*(2n+1)/6
1 + 2 + ... + n = (n+1)*(n/2)
Hence, no loop is needed.

*/

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main () {
    int ans = (100*(101)*(201)/6) - pow(101 * 50, 2);
    cout << ans << endl;
}

/*
25164150
*/