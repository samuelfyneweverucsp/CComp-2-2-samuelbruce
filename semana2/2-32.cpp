/** @author samuelfyneweverucsp 
 * @file 
 * @brief  **/ 

#include <iostream>

using namespace std;

int main() {
    int edad{0};
    float MHR1{0};
    float MHR2{0};
    float MHR3{0};
    float MHR4{0};

    float mayor{0};
    float menor{0};

    cout << "Ingresa edad: " << endl;
    cin >> edad;

    MHR1 = 220 - edad;
    MHR2 = 208 - 0.7 * edad;
    MHR3 = MHR2 - 1;
    MHR4 = 211 - 0.64 * edad;

    cout << "MHR1: " << MHR1 << "\nMHR2: " << MHR2 << "\nMHR3: " << MHR3 << "\nMHR4: " << MHR4 << endl;
    if ((MHR1 > MHR2) && (MHR1 > MHR3) && (MHR1 > MHR4)) {mayor = MHR1;}
    else if ((MHR2 > MHR3) && (MHR2 > MHR4)) {mayor = MHR2;}
    else if (MHR3 > MHR4) {mayor = MHR3;}
    else {mayor = MHR4;}

    if ((MHR1 < MHR2) && (MHR1 < MHR3) && (MHR1 < MHR4)) {menor = MHR1;}
    else if ((MHR2 < MHR3) && (MHR2 < MHR4)) {menor = MHR2;}
    else if (MHR3 < MHR4) {menor = MHR3;}
    else {menor = MHR4;}
    cout << "Rango de MHRs: (" << menor << ", " << mayor << ")" << endl;

    
}
 