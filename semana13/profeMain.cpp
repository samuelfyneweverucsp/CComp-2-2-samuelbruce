#include <iostream>
#include <string>
#include "DynamicArray.h"
#include "Point.h"

using namespace std;

int main() {
    
    DynamicArray<int> dai;
    dai.push_back(8);
    dai.push_back(6);
    dai.push_back(10);
    dai.print();

    DynamicArray<string> das;
    das.push_back("ciencia ");
    das.push_back("de ");
    das.push_back("la ");
    das.push_back("computacion ");
    das.print();

    DynamicArray<Point<int>> dap;
    Point p{5,4};
    dap.push_back(p);
    dap.print();

    DynamicArray<Point<double>> dap2;
    Point p2{5.6,4.10};
    dap2.push_back(p2);
    dap2.print();

    return 0;
}
