/**
 * @file fibo.cpp
 * 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cmath>

int fibRecursiva(unsigned int n) {
    if(n <= 1) {return 1;} else {return fibRecursiva(n-1) + fibRecursiva(n-2);}
}

int fibIterativa(unsigned int n) {
    int fiboI = 1;
    for(int i = 1; i <= n; i++) {
        
    }
}