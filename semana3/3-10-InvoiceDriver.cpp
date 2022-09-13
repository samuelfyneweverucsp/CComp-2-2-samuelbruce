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

    Invoice invoiceActual("Parte sin nombre", "Descripcion vacia", 0, 0);

    void estatusDeParte() {
            cout << " Numero de parte: " << invoiceActual.getNumero() << endl;
            cout << " Descripcion de parte: " << invoiceActual.getDescripcion() << endl;
            cout << " Cantidad de parte: " << invoiceActual.getCantidad() << endl;
            cout << " Precio cada unidad: " << invoiceActual.getPrecio() << endl;
            cout << " Impuesto (proporcion): " << invoiceActual.getImpuesto() << endl;
            cout << " Descuento: " << invoiceActual.getDescuento() << endl;
            cout << " Costa total: " << invoiceActual.getInvoiceAmount() << endl;
        };

    for (int i = 0; i < (numeroDeInvoices + 1); i++) {
        cout << " Invoice predeterminada: " << endl;
        estatusDeParte();

        string numeroNuevo{""};
        cout << " Ingrese numero de parte:\n ";
        getline(cin, numeroNuevo);
        invoiceActual.setNumero(numeroNuevo);

        string descripcionNuevo{""};
        cout << " Ingrese descripcion de parte:\n ";
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
        cout << " Ingrese descuento de cada parte (aplicada antes del impuesto): "
        cin >> descuentoNuevo;
        invoiceActual.setDescuento(descuentoNuevo);

        cout << " Invoice actual: "
        estatusDeParte();
    }
    cout << " ¡Que tenga usted un buen dia! " << endl;

    return 0;
}
 