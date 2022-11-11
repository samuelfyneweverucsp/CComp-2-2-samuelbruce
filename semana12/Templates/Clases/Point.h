#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>
using namespace std;

template <typename T>
class Point {
    private:
        T x;
        T y;
    public:
        Point(T a, T b) : x(a), y(b) {}
        T getX() const;
        T getY() const; 
        
// Ya que tenemos templates, está bien no separar la implementación de la declaración
        
};

template <typename T>
T Point<T>::getX() const {return x;}

template <typename T>
T Point<T>::getX() const {return y;}

#endif