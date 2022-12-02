#include <fstream> 
#include <ostream>
#include <iostream>
#include <string>

using namespace std;

// Para estudiar despúes: solamente copiar los enteros, etc.

int main () {
    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt");
    /* TODO: copiar por caracter... esta copia por linea :/ */
    while(!source.eof()) {
        char linea;
        linea = getchar();
        
    }

    }