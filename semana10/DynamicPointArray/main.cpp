#include <iostream>
#include "DynamicPointArray.h"
#include "Point.h"

using namespace std;

int main() {

    DynamicPointArray da;
    cout << da.getSize() << endl;

    Point p1;
    Point p2;
    p2.setX(5); p2.setY(7);

    Point p3;
    p3.setX(7); p3.setY(10);
    Point p4;
    p4.setX(9); p4.setY(-2);

    Point arreglo[] = {p1, p2, p3, p4, p1, p2, p3};
    DynamicPointArray da2(arreglo, 4);
    da2.print();
    DynamicPointArray da3 = da2;
    da3.print();

    da2.push_back(p1);
    da2.print();
    da2.insert(p3, 1);
    da2.print();
    da2.insert(p2, 0);
    da2.print();

    da2.insert(p4, 6);
    da2.print();

    da2.remove(3);
    da2.print();

    return 0;
}
