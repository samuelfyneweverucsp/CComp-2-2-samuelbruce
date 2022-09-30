#ifndef __POINT_H__
#define __POINT_H__

using std::cout;
using std::endl;

class Point {
    public:
        Point(int _x = 0, int _y = 0) : x(_x), y(_y) {} // ahora es un constructor predeterminado
                                                        // porque hay valores predeterminados (por defectos)

        void setX(int _x) {
            x = _x;
        }

        int getX() {
            return x;
        }

        void setY(int _y) {
            y = _y;
        }

        int getY() const {
            return y;
        }

        void imprimir() const {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }

        // no ponemos imprimirPoints() acá porque tiene que ver con un arreglo de puntos...
        // ...no tiene que ver con UN Point. 
        // entonces ponemos imprimirPoints() en el otro  

    private:
        int x, y; 

};

#endif