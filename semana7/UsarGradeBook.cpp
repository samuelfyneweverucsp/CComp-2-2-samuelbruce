#include <iostream> 
#include <array>
#include "GradeBook.h"

using namespace std;

int main() {
    const array<int, GradeBook::estudiantes> lasNotas = {51, 67, 74, 76, 79, 81, 85, 87, 88, 91};
    string laNombre = "Cálculo I";

    GradeBook laGradeBook = GradeBook(laNombre, lasNotas);
    laGradeBook.mensajeDeBienvenido();
    laGradeBook.procesarNotas(); 
}