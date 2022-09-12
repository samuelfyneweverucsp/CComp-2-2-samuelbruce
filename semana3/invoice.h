#include <iostream>

using std::string;
using std::cout;

class Invoice {
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

        void setImpuesto(int impuesto) {
            impuestoProporcion = impuesto;
        }

        int getImpuesto() const {
            return impuestoProporcion;
        }

        void setDescuento(double descuento) {
            descuentoDeParte = descuento;
        }

        int getDescuento() {
            return descuentoDeParte;
        }


    private:
        std::string numeroDeParte{"0"};
        std::string descripcionDeParte{" "};
        int cantidadDeParte{1};
        int precioCadaParte{20}; 
        double impuestoProporcion{0.002};
        double descuentoDeParte{0};
};