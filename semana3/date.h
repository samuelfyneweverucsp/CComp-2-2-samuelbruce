/** @author samuelfyneweverucsp 
 * @file 
 * @brief  **/ 

#include <iostream>
using std::string;
using std::cout;

class Date {
    private: 
        int fecha{1};
        int mes{1};
        int anho{2000};
    
    public:
        explicit Date(int fechaInicial, int mesInicial, int anhoInicial) {
            fecha = fechaInicial;
            if ((mesInicial > 1) && (mesInicial < 13)) {
                mes = mesInicial;
            } else {
                cout << "El mes no es valida, entonces queda con enero :)" << endl; 
                mes = 1;}
            anho = anhoInicial;
        }

        int getFecha() const {
            return fecha;
        }

        int getMes() const {
            return mes;
        }
        
        int getAnho() const {
            return anho;
        }

        void setFecha(int fechaToSet) {
            fecha = fechaToSet;
        }

        void setMes(int mesToSet) {
            mes = mesToSet;
        }

        void setAnho(int anhoToSet) {
            anho = anhoToSet;
        }

        void mostrarFecha(date elDate) {
            std::cout << "MM/DD/YYYY: " << mes << "/" << fecha << "/" << anho << endl;
        }

}
