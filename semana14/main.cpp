#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

void printWidthHeightArray(int, Polygon**);
void printAreas(int, Polygon**);

int main () {
    Rectangle rect1 = Rectangle(3, 4);
    Triangle tri1 = Triangle(3, 4);
    Triangle tri2 = Triangle(1, 2);

    Polygon* ptr1 = &rect1;
    Polygon* ptr2 = &tri1;
    Polygon* ptr3 = &tri2;

    Polygon** miArr = new Polygon*[3] {ptr1, ptr2, ptr3};

    printWidthHeightArray(3, miArr);
    cout << endl;
    printAreas(3, miArr);
}

void printWidthHeightArray(int size, Polygon** arr) {
    for(int i = 0; i < size; i++) {
        arr[i]->printwidth();
        arr[i]->printheight();
    }
}

void printAreas(int size, Polygon** arr) {
    for(int i = 0; i < size; i++) {
        arr[i]->printarea();
    }
}
