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
             mostrarBarChart();



        }

        void mostrarNotas() const {
            std::cout << "\nLas notas son:\n\n" << std::endl; 

            for(size_t estudiante{0}; estudiante < notas.size(); estudiante++) {
                std::cout << "Estudiante" << std::setw(2) << estudiante + 1 << ": "
                << std::setw(3) << notas[estudiante] << std::endl;
            }
        }

        double getAverage() const {
            int totalDeNotas = 0;
            for(int nota : notas) {
                totalDeNotas += nota;
            }
            totalDeNotas = static_cast<double>(totalDeNotas);
            return totalDeNotas/notas.size(); 
        }

        int getMinimum() const {
            int minimo = 100;
            for(int nota: notas) {
                if (nota < minimo) {minimo = nota;}
            }
            return minimo;
        }

        int getMaximum() const {
            int maximo = 0;
            for(int nota: notas) {
                if (nota > maximo) {maximo = nota;}
            }
            return maximo;
        }

        void mostrarBarChart() const {
            std::cout << "Grade distribution: " << std::endl;
            const size_t frecuenciaTam{11};
            std::array<int, frecuenciaTam> frecuencias{}; // inicializada con ceros

            for(int nota : notas) {
                ++frecuencias[nota/10];
            }

            for(size_t count{0}; count < frecuenciaTam; count++) {
                if(0 == count) {
                    std::cout << " 0-9: ";
                } else if (10 == count) {
                    std::cout << " 100: ";
                } else {
                    std::cout << count * 10 << "-" << count * 10 + 9 << ": ";
                }
                for (unsigned int stars = 0; stars < frecuencias[count]; stars++) {
                    std::cout << "*";
                }
                std::cout << std::endl;
            }

        }

    private:
        std::string nombreDelCurso;
        std::array<int, estudiantes> notas;
};