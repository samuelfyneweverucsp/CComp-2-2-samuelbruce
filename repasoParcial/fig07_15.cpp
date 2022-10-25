#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm>

using namespace std;

int main () {
    const size_t tamDeArray{7};
    array<string, tamDeArray> colores{"rojo", "anaranjado", "amarillo", "verde", "azul", "morada", "purpura"};

    cout << "Array \"desordenado\": " << endl;
    for(string color : colores) {
        cout << color << " ";
    }

}
