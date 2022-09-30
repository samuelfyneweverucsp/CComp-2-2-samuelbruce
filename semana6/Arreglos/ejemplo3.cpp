#include <iostream>
#include "Point.h"

using namespace std;

 void imprimirPoints(Point arr[], int tam) {
            for(int i = 0; i < tam; i++) {
                arr[i].imprimir();
                std::cout << endl;
            }
        }

int main() {

    Point p1;
    Point p2(4, 3);
    Point p3(4, 0);

    Point arr[] = {p1, p2, p3};

    imprimirPoints(arr, 3);

    return 0;

}