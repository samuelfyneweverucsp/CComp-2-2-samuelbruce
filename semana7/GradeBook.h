#include <string>
#include <array>
#include <iomanip>
#include <iostream>

class GradeBook {
    public:
        static const size_t estudiantes{10}; // ¿tiene que ser const?

        explicit GradeBook(const std::string& nombre, 
                  const std::array<int, estudiantes>& arregloDeNotas)
            : nombreDelCurso{nombre}, notas{arregloDeNotas} {

            }

        void setNombreDelCurso(const std::string& nombre) {
            nombreDelCurso = nombre;
        }

        std::string getNombreDelCurso() const {
            return nombreDelCurso;
        }

        void mensajeDeBienvenido() const {
            std::cout << "¡Bienvenido al GradeBook para el curso de\n" << getNombreDelCurso() << "!" << std::endl;
        }

        void procesarNotas() const {
             mostrarNotas();
             std::cout << std::setprecision(2) << std::fixed;
             std::cout << "\nClass average is: " << getAverage() << std::endl;
             std::cout << "Lowest grade is: " << getMinimum() << std::endl;
             std::cout << "Highest grade is: " << getMaximum() << std::endl;


        }

        void mostrarNotas() const {
            std::cout << "\nLas notas son:\n\n" << std::endl; 
        }

        double getAverage() const {
            return;
        }

        int getMinimum() const {
            return;
        }

        int getMaximum() const {
            return;
        }

        void mostrarBarChart() const {
            return;
        }

    private:
        std::string nombreDelCurso;
        std::array<int, estudiantes> notas;
};