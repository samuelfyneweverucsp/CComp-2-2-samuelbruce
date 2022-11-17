#include <fstream> 
using namespace std;

int main () {
    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt");
    int x;
    int suma = 0;
    int numeroDeValores = 0;
    while(!source.eof()) {
        int x;
        source >> x;
        suma += x;
        numeroDeValores++;        
        destination << x;
        destination << endl;
    }
    source.close();
    destination << "Suma: " << suma << endl;
    destination << "Numero de valores: " << numeroDeValores << endl;
    destination << "Promedio aritmetico: " << static_cast<double>(suma) / static_cast<double>(numeroDeValores);
    return 0;
}


