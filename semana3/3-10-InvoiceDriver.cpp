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

        string numeroNuevo{""};
        cout << " Ingrese numero de parte:\n " << endl;
        getline(cin, numeroNuevo);
        invoiceActual.setNumero(numeroNuevo);

        string descripcionNuevo{""};
        cout << " Ingrese descripcion de parte:\n " << endl;
        getline(cin, descripcionNuevo);
        invoiceActual.setDescripcion(descripcionNuevo);

        int cantidadNuevo{0};
        cout << " Ingrese cantidad de parte:\n "; 
        cin >> cantidadNuevo;
        invoiceActual.setCantidad(cantidadNuevo);

        int precioNuevo{0};
        cout << " Ingrese precio de cada unidad:\n ";
        cin >> precioNuevo;
        invoiceActual.setPrecio(precioNuevo);

        int impuestoNuevo{0};
        cout << " Ingrese impuesto como proporcion (p.ej. 10% = 0.1):\n ";
        cin >> impuestoNuevo;
        invoiceActual.setImpuesto(impuestoNuevo);

        int descuentoNuevo{0};
        cout << " Ingrese descuento de cada parte (aplicada antes del impuesto): ";
        std::cin >> descuentoNuevo;
        invoiceActual.setDescuento(descuentoNuevo);

        cout << " Invoice actual: ";
        invoiceActual.estatusDeParte();
        cout << " Costa total: " << invoiceActual.getInvoiceAmount() << endl;
    }
    cout << " ¡Que tenga usted un buen dia! " << endl;

    return 0;
}
 