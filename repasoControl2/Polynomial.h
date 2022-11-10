#ifndef __POLYNOMIAL_H__
#define __POLYNOMIAL_H__

#include <array>
#include <iostream>

class Polynomial {
        friend std::ostream& operator<<(std::ostream& output, Polynomial);
    public:
        Polynomial(int grado, int terminos[]);
        int getAt(int potencia);
        void setAt(int potencia, int coef);

        void printAt(int potencia);

        Polynomial operator+(Polynomial);
        Polynomial operator-(Polynomial);
        Polynomial operator*(Polynomial);
        Polynomial operator=(Polynomial);
    private:
        int degree;
        int terms[];
};

#endif