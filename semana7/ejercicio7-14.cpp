#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

void outputVector(const vector<int>&);
void inicializarVector(vector<int>& numeros);
void ingresarNumeros(vector<int>& numeros);
void imprimirVector(vector<int>& numeros);

int main() {
    cout << "\nIngresar veinte enteros: " << endl;
    vector<int> veinteNumeros(0);
    ingresarNumeros(veinteNumeros);
    cout << "\nLos numeros sin repetición son: " << endl;
    imprimirVector(veinteNumeros);
}

void imprimirVector(vector<int> &numeros) {
    for(int numero : numeros) {
        cout << numero << " ";
    }
}

void inicializarVector(vector<int>& numeros) {
    for(int& numero : numeros) {
        numero = 0;
    }
}

void ingresarNumeros(vector<int>& numeros) {
    int ingresado;
    for(int i = 0; i < 20; i++) {
        sort(numeros.begin(), numeros.end());
        cin >> ingresado;
        bool encontrado{binary_search(numeros.begin(), numeros.end(), ingresado)};
        if (!encontrado) {numeros.push_back(ingresado);}
    }
}