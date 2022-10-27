#ifndef __INTARRAY_H__
#define __INTARRAY_H__

/**
 * Arreglo de enteros estático representado en una clase
*/

// en proyectos grandes, mejor es separar la declaración de la implementación
// acá es como un esquema
// en IntArray.cpp, hay el contenido
class IntArray {
        int size;
        int *data;        
    public:
        IntArray(int size);
        IntArray(const IntArray &o);

        void setAt(int index, int value);
        int getAt(int index) const ;
        int getSize() const ;
        void print() const ;

        ~IntArray();
};

#endif