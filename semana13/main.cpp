#include <iostream>
#include "DynamicArray.h"
#include "Point.h"

using namespace std;

int main() {

    DynamicArray<int> dai;
    dai.push_back(8);
    dai.push_back(7);
    dai.push_back(4);
    dai.push_back(2);
    dai.push_back(9);
    dai.print();

    DynamicArray<string> das;
    das.push_back("ciencia ");
    das.push_back("de ");
    das.push_back("la ");
    das.push_back("computacion ");
    das.print();

    DynamicArray<Point<int>> dap;
    Point p1{5, 4};
    Point p2{3, 0};
    Point p3{2, 9};
    dap.push_back(p1);
    dap.push_back(p2);
    dap.push_back(p3);
    dap.print();

    DynamicArray<Point<double>> dap2;
    Point p4{2.2, 4.4};
    Point p5{3.3, 6.6};
    Point p6{1.0, 1.0};
    dap2.push_back(p4);
    dap2.push_back(p5);
    dap2.push_back(p6);
    dap2.print();

}