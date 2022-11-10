#ifndef __POINTARRAY_H__
#define __POINTARRAY_H__
#include "Point.h"
#include <iostream>


/**
 * Arreglo de POINTS estático representado en una clase
*/

// en proyectos grandes, mejor es separar la declaración de la implementación
// acá es como un esquema
// en PointArray.cpp, hay el contenido

class PointArray {
    friend std::ostream& operator<<(std::ostream&, PointArray&);
      
    public:
        PointArray(int size);
        PointArray(const PointArray &o);

        void setAt(int index, int x, int y);
        Point getAt(int index) const ;
        int getSize() const ;
        void print() const ;

        ~PointArray();
    private:
        int size;
        Point *data;  
};

#endif