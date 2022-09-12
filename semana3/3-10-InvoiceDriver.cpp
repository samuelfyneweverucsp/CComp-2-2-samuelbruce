/** @author samuelfyneweverucsp 
 * @file 
 * @brief  **/ 

#include <iostream>
#include "invoice.h"

using namespace std;


int main() {
    int numeroDeInvoices{0};

    cout << "+====================================+" << endl;
    cout << " Bienvenid@s al programa Invoice 9001 " << endl;
    cout << " Ingrese numero de Invoices para hoy: " << endl;
    cout << " ";
    cin >> numeroDeInvoices;

    for (int i = 0; i < (numeroDeInvoices + 1); i++) {
        Invoice InvoiceActual("Parte sin nombre", "Descripcion vacia", 0, 0);
        
        void estatusDeParte(Invoice InvoiceDeEstatus); {
            cout << " Numero de parte: " << InvoiceActual.getNumero() << endl;
            cout << " Descripcion de parte: " << InvoiceActual.getDescripcion() << endl;
            cout << " Cantidad de parte: " << InvoiceActual.getCantidad() << endl;
        };
        
        cout << " Invoice predeterminada: " << endl;

    }


}
 