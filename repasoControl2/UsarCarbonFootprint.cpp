#include <iostream>
#include "CarbonFootprint.h"

#include "Car.h"
#include "Bicycle.h"
#include "Building.h"

using namespace std;

int main () {
    Car Sienna2004(500.0, 30.0, 20000.0);
    cout << Sienna2004.getCarbonFootprint() << endl;
    
    Bicycle Giant(50.0);
    cout << Giant.getCarbonFootprint() << endl;
    
    /*
    Building Koinonia(500, 500);
    cout << Koinonia.getCarbonFootprint();
    */

}
