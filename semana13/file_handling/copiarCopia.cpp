#include <fstream> 
#include <ostream>
#include <iostream>
#include <string>

using namespace std;

// Para estudiar despúes: solamente copiar los enteros, etc.

int main () {
    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt");
    while(!source.eof()) {
        string linea;
        getline(source, linea);
        cout << linea << endl;
        destination << linea << endl;
    }

    }