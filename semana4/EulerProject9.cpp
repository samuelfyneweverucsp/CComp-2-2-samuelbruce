/*

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which a^2 + b^2 = c^2.

Ya sé que 3^2 + 4^2 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int a = 3;
int b = 4;
int c = 5;

int main () {
    int tripletSum1 = 3 + 4 + 5;
    int tripletSum2 = 5 + 12 + 13;
    int tripletSum3 = 8 + 15 + 17;
    int tripletSum4 = 7 + 24 + 25;
    int tripletSum5 = 20 + 21 + 29;
    int tripletSum6 = 12 + 35 + 37;
    int tripletSum7 = 9 + 40 + 41;
    int tripletSum8 = 28 + 45 + 73;
    int tripletSum9 = 11 + 60 + 61;
    int tripletSum10 = 16 + 63 + 65;
    int tripletSum11 = 33 + 56 + 65;
    int tripletSum12 = 48 + 55 + 73;
    int tripletSum13 = 13 + 84 + 85;
    int tripletSum14 = 36 + 77 + 85;
    int tripletSum15 = 39 + 80 + 89;
    int tripletSum16 = 65 + 72 + 97;

    cout << " " << tripletSum1 << " " << tripletSum2 << " " << tripletSum3
    << " " << tripletSum4 << " " << tripletSum5 << " " << tripletSum6 << " " << tripletSum7
    << " " << tripletSum8 << " " << tripletSum9 << " " << tripletSum10 << " " << tripletSum11
    << " " << tripletSum12 << " " << tripletSum13 << " " << tripletSum14 << " " << tripletSum15
    << " " << tripletSum16 << endl;

    cout << 8 * 25 + 15 * 25 + 17 * 25 << endl;

    cout << 8 * 25 * 15 * 25 * 17 * 25 << endl;

}

/*
Source for triplets: https://en.wikipedia.org/wiki/Pythagorean_triple
Output: 12 30 40 56 70 84 90 146 132 144 154 176 182 198 208 234
Since 40 * 25 = 1000, we conclude that the third triplet in the list multiplied by 25 is our result:
8 * 25 + 15 * 25 + 17 * 25 = 1000.
Therefore the product is
8 * 25 * 15 * 25 * 17 * 25:
31875000

*/