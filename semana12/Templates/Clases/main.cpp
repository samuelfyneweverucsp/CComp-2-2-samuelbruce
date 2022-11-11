#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point<float> ptFloat(12.1, 12.5);
    Point<int> ptInt(3, 4);

    cout << ptFloat.getX() << ", " << ptFloat.getY() << endl;
    cout << ptInt.getX() << ", " << ptInt.getY() << endl;


}