/* No terminado!

The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.

73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450

Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?

*/

#include <iostream>
#include <cmath>

// Mi primer intento.

using std::cout;
using std::endl;

int64_t num1 = 7316717653133;
int64_t num2 = 6249192251196;
int64_t num3 = 9674426574742;
int64_t num4 = 3553491949349;
int64_t num5 = 9194934969835;
int64_t num6 = 6326239578318; // 
int64_t num7 = 1869478851843;
int64_t num8 = 7891129494954;
int64_t num108 = 9112949495459;
int64_t num9 = 7379583319528;
int64_t num109 = 9583319528532;
int64_t num10 = 6987471585238;
int64_t num110 = 9874715852386;
int64_t num11 = 5576689664895;
int64_t num12 = 4452445231617;
int64_t num112 = 5231617318564;
int64_t num13 = 9871112172238; 
int64_t num14 = 6222989342338;
int64_t num15 = 8135336276614;
int64_t num115 = 3362766142828;
int64_t num16 = 6444486645238;
int64_t num116 = 4866452387493;
int64_t num17 = 1218839987979;
int64_t num18 = 9377665727333;
int64_t num19 = 5947522435258;
int64_t num119 = 4752243525849;
int64_t num20 = 48395864467; // solamente 11 pero... 
int64_t num21 = 6324415722155;
int64_t num121 = 4157221553975;
int64_t num22 = 3697817977846; // too long
int64_t num23 = 5693219784686; 
int64_t num24 = 2248283972241; // too long
int64_t num124 = 3972241375657;
int64_t num25 = 9729686524145;
int64_t num26 = 4122758866688; 
int64_t num27 = 4799244429282;
int64_t num28 = 8634656748139; 
int64_t num29 = 9123162824586;
int64_t num30 = 7866458359124;
int64_t num31 = 5665294765456;
int64_t num32 = 8284891288314;
int64_t num33 = 9624554443629;
int64_t num34 = 9878799272442;
int64_t num35 = 7919133875499;
int64_t num36 = 5593572972571;
int64_t num37 = 3626956188267;

int get1 (int64_t num) {
    return num % 10;
}

int get2(int64_t num) {
    return (num % 100) / 10;
}

int get3(int64_t num) {
    return (num % 1000) / 100;
}

int get4(int64_t num) {
    return (num % 10000) / 1000;
}

int get5(int64_t num) {
    return (num % 100000) / 10000;
}

int get6(int64_t num) {
    return (num % 1000000) / 100000;
}

int get7(int64_t num) {
    return (num % 10000000) / 1000000;
}

int get8(int64_t num) {
    return (num % 100000000) / 10000000;
}

int get9(int64_t num) {
    return (num % 1000000000) / 100000000; 
}

int get10(int64_t num) {
    return (num % 10000000000) / 1000000000;
}

int get11(int64_t num) {
    return (num % 100000000000) / 10000000000;
}

int get12(int64_t num) {
    return (num % 1000000000000) / 100000000000;
}

int get13(int64_t num) {
    return (num % 10000000000000) / 1000000000000;
}

int prod(int64_t num) {
    return get1(num) * get2(num) * get3(num) * get4(num) * get5(num) * get6(num)
           * get7(num) * get8(num) * get9(num) * get10(num) * get11(num) * get12(num) * get13(num);
}

int main () {
    // primer intento

    /* cout << prod(num1) << "\n" << prod(num2) << "\n" << prod(num3) << "\n" << prod(num4) << "\n" << prod(num5) << "\n" << 
    prod(num6) << "\n" << prod(num7) << "\n" << prod(num8) << "\n" << prod(num9) << "\n" << prod(num10) << "\n" <<
    prod(num11) << "\n" << prod(num12) << "\n" << prod(num13) << "\n" << prod(num14) << "\n" << prod(num15) << "\n" <<
    prod(num16) << "\n" << prod(num17) << "\n" << prod(num18) << "\n" << prod(num19) << "\n" << prod(num20) << "\n" <<
    prod(num21) << "\n" << prod(num22) << "\n" << prod(num23) << "\n" << prod(num24) << "\n" << prod(num25) << "\n" <<
    prod(num26) << "\n" << prod(num27) << "\n" << prod(num28) << "\n" << prod(num29) << "\n" << prod(num30) << "\n" <<
    prod(num31) << "\n" << prod(num32) << "\n" << prod(num33) << "\n" << prod(num34) << "\n" << prod(num35) << "\n" <<
    prod(num36) << "\n" << prod(num37) << "\n" << prod(num108) << "\n" << prod(num109) << "\n" << prod(num110) << "\n" <<
    prod(num112) << "\n" << prod(num115) << "\n" << prod(num116) << "\n" << prod(num119) << "\n" << prod(num121) << "\n" <<
    prod(num124) << endl; */
    
    // En fin busqué otra solución. Aquí tengo algo que comprendo
    // de mi amigo Stephan Brumme. Su explicación está debajo
    // # Solved by
    // Stephan Brumme
    // February 2017
    //
    // # Algorithm
    // Starting at each position where at least 13 digits (variable ''span'') can be found,
    // a loop goes through those 13 digits and:
    // 1. convert each digit from ASCII to numeric: ''numeric = ascii - '0' ''
    // 2. multiply all those converted digits
    // 3. if product is higher than before: keep it
    //
    // # Alternative
    // If ''span'' is large, then an incremental approach might be useful:
    // instead of multiplying all digits over and over again, we re-use a large portion of last iteration's product.
    // Let's pretend our sequences contains just 4 elements:
    // `product_0=x_0*x_1*x_2*x_3`
    // then
    // `product_1=x_1*x_2*x_3*x_4=product_0*x_4/x_0`
    //
    // This reduces O-complexity from O(mn) to O(n).
    //
    // # I/O

  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    // length of string
    unsigned int length;
    // number of relevant consecutive digits
    unsigned int span;
    // read number as a string
    std::string number;
    std::cin >> length >> span >> number;

    // results can be much bigger than 32 bits ... but 64 bits are enough, though
    unsigned long long best = 0;
    // loop ends when there are less than "span" digits left
    for (int start = 0; start + span < length; start++)
    {
      unsigned long long current = 1;
      // convert digits from ASCII to numbers and multiply
      for (unsigned int i = 0; i < span; i++)
        current *= number[start + i] - '0';

      // better than before ?
      if (best < current)
        best = current;
    }

    std::cout << best << std::endl;
  }
  return 0;
}

// respuesta correcta: 23514624000







/*
Output de mi primer intento:
5000940
4199040
568995840
283435200
2040733440 **
78382080
371589120
235146240
342921600
812851200
2039787520 **
3225600
677376
53747712
13063680
424673280
987614208
630118440
120960000
0
2016000
1082043392 **
940584960
6193152
261273600
495452160
167215104
627056640
9953280
348364800
1632960000 **
56623104
223948800
2048385024 ****
462944160
208372500
313528320
188956800
69984000
812851200
3628800
27869184
836075520 
96768000
13230000
66679200

Mi otra idea: usar Boost para procesar el primer numero como un entero grandísimo. 
*/

