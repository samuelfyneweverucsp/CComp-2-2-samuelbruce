#include "Polynomial.h"
#include <array>

using namespace std;

Polynomial::Polynomial(int grado, int terminos[]) : degree(grado) {
    for(int i = 0; i < grado; i++) {
        terms[i] = terminos[i];
    }
}

int Polynomial::getAt(int potencia) {
    return this->terms[potencia];
}

void Polynomial::setAt(int potencia, int coef) {
    this->terms[potencia] = coef;
}

void Polynomial::printAt(int potencia) {
    cout << this->terms[potencia] << "x^" << potencia;
}

ostream& operator <<(ostream& output, Polynomial poli) {
    for(int i = poli.degree; i > 0; i--) {
        output << poli.getAt(i) << "x^" << i << " ";
        if(poli.getAt(i-1) > 0) {output << "+";} 
        output << " ";
    }
        output << poli.terms[0] << endl;
        return output;
}

