#include <iostream>
#include "PointArray.h"

using namespace std;

int main() {

    PointArray a(2);    

    a.setAt(0, 34, 34);
    a.setAt(1, 35, 35);

    a.print();

    if(true) {
        PointArray b = a;
    }
 
    return 0;
}
 