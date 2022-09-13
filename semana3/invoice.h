/** @author samuelfyneweverucsp 
 * @file clase Invoice, de ejercicio 3-10
 * @brief para partes de autos **/ 


#include <iostream>

using std::string;
using std::cout;

class Invoice {
    private:
        std::string numeroDeParte{"0"};
        std::string descripcionDeParte{" "};
        int cantidadDeParte{1};
        int precioCadaParte{20}; 
        double impuestoProporcion{0.002};
        double descuentoDeParte{0};
        double precioTotal{0};

    public:
        explicit Invoice(std::string numeroInicial, 
                         std::string descripcionInicial,
                         int cantidadInicial,
                         int precioInicial) {
                            numeroDeParte = numeroInicial;
                            descripcionDeParte = descripcionInicial;
                            cantidadDeParte = cantidadInicial;
                            precioCadaParte = precioInicial;
                            impuestoProporcion = .002;
                            descuentoDeParte = 0;
        }

        void setNumero (std::string numero) {
            numeroDeParte = numero;
        }

        std::string getNumero() const {
            return numeroDeParte;
        }

        void setDescripcion (std::string descripcion) {
            descripcionDeParte = descripcion;
        }

        std::string getDescripcion() const {
            return descripcionDeParte;
        }

        void setCantidad(int cantidad) {
            cantidadDeParte = cantidad;
        }

        int getCantidad() const {
            return cantidadDeParte;
        }

        void setPrecio(int precio) {
            precioCadaParte = precio;
        }

        int getPrecio() const {
            return precioCadaParte;
        }

        void setImpuesto(double impuesto) {
            impuestoProporcion = impuesto;
        }

        double getImpuesto() const {
            return impuestoProporcion;
        }

        void setDescuento(double descuento) {
            descuentoDeParte = descuento;
        }

        double getDescuento() {
            return descuentoDeParte;
        }

        void estatusDeParte() {
            cout << " Numero de parte: " << numeroDeParte << std::endl;
            cout << " Descripcion de parte: " << descripcionDeParte << std::endl;
            cout << " Cantidad de parte: " << cantidadDeParte << std::endl;
            cout << " Precio cada unidad: " << precioCadaParte << std::endl;
            cout << " Impuesto (proporcion): " << impuestoProporcion << std::endl;
            cout << " Descuento: " << descuentoDeParte << std::endl;
        };

        double getInvoiceAmount() {
            precioTotal = (cantidadDeParte * (precioCadaParte - descuentoDeParte)) * (1 + impuestoProporcion);
            return precioTotal;
        }

};