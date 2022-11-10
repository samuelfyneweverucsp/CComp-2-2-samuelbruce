#include "Date.h"
#include <iostream>

using namespace std;

int main () {
    Date CumpleSamu(11, 18, 2000);
    Date CumpleDaisy(1, 3, 2004);
    Date NewYearsEve(12, 31, 2022);

    cout << CumpleSamu;
    cout << CumpleDaisy;
    cout << NewYearsEve;

    CumpleSamu++;
    CumpleDaisy++;
    NewYearsEve++;

    cout << CumpleSamu;
    cout << CumpleDaisy;
    cout << NewYearsEve;

    NewYearsEve += 100;
    cout << NewYearsEve;

    CumpleDaisy += 364;
    cout << CumpleDaisy;

}
