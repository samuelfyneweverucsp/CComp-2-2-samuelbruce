#include <iostream>
#include "PointArray.h"
#include "Point.h"

using namespace std;

int main() {

    PointArray a(2);    

    a.setAt(0, 34, 34);
    a.setAt(1, 35, 35);

    cout << a.getSize() << endl;

    a.print();

    /*if(true) {
        PointArray b = a;
    }*/

    cout << a;
 
    return 0;
}
 