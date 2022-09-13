/** @author samuelfyneweverucsp 
 * @file 
 * @brief  **/ 

#include <iostream>
#include <string>
#include "invoice.h"

using namespace std;


int main() {
    int numeroDeInvoices{0};

    cout << "+====================================+" << endl;
    cout << " Bienvenid@s al programa Invoice 9001 " << endl;
    cout << " Ingrese numero de Invoices para hoy: " << endl;
    cout << " ";
    cin >> numeroDeInvoices;

    Invoice invoiceActual("Parte sin nombre", "Descripcion vacia", 0, 0);

    for (int i = 1; i < (numeroDeInvoices + 1); i++) {
        cout << " Invoice predeterminada: " << endl;

        invoiceActual.estatusDeParte();
        cout << " Costa total: " << invoiceActual.getInvoiceAmount() << endl;

        
        cout << " Ingrese numero de parte: " << endl;
        string numeroNuevo{" "};
        getline(cin, numeroNuevo);
        invoiceActual.setNumero(numeroNuevo);

        cout << " Ingrese numero de parte: " << endl;
        getline(cin, numeroNuevo);
        invoiceActual.setNumero(numeroNuevo);

        cout << " Ingrese descripcion de parte: " << endl;
        string descripcionNuevo{" "};
        getline(cin, descripcionNuevo);
        invoiceActual.setDescripcion(descripcionNuevo);

        int cantidadNuevo{0};
        cout << " Ingrese cantidad de parte: " << endl; 
        cin >> cantidadNuevo;
        invoiceActual.setCantidad(cantidadNuevo);

        int precioNuevo{0};
        cout << " Ingrese precio de cada unidad: " << endl;
        cin >> precioNuevo;
        invoiceActual.setPrecio(precioNuevo);

        int impuestoNuevo{0};
        cout << " Ingrese impuesto como proporcion (p.ej. 10% = 0.1): " << endl;
        cin >> impuestoNuevo;
        invoiceActual.setImpuesto(impuestoNuevo);

        int descuentoNuevo{0};
        cout << " Ingrese descuento de cada parte (aplicada antes del impuesto): " << endl;
        cin >> descuentoNuevo;
        invoiceActual.setDescuento(descuentoNuevo);

        cout << " Invoice actual:\n ";
        invoiceActual.estatusDeParte();
        cout << " Costa total: " << invoiceActual.getInvoiceAmount() << endl;
    }
    cout << " ¡Que tenga usted un buen dia! " << endl;

    return 0;
}
 