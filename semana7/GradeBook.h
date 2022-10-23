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
            std::cout << "¡Bienvenido al GradeBook para el curso de\n" << getNombreDelCurso << "!" << std::endl;
        }

        void procesarNotas() const {
            
        }

        void mostrarNotas() const {
            std::cout << "\nLas notas son:\n\n" << std::endl; 
        }

    private:
        std::string nombreDelCurso;
        std::array<int, estudiantes> notas;
};