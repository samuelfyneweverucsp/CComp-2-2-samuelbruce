#include <iostream>
#include "PointArray.h"
#include "Point.h"

PointArray::PointArray(int size) {
    data = new Point[size];
    this->size = size;
}

PointArray::PointArray(const PointArray &o) {
    size = o.size;
    Point *data = new Point[o.size];
    for(int i = 0; i < size; i++) {
        data[i] = Point(o.data[i].getX(), o.data[i].getY());
    }
}

void PointArray::setAt(int index, int x, int y) {
    if(index >= 0 && index < size) // validación de índice
        data[index] = Point(x, y);
}

Point PointArray::getAt(int index) const {
    if(index >= 0 && index < size)
        return data[index];      
    else
        throw;      
}

int PointArray::getSize() const {
    return size;
}

void PointArray::print() const {
    for(int i = 0; i < size; i++)
        data[i].print();
    std::cout << std::endl;
}
 
PointArray::~PointArray() { // destructor
    delete [] data;
}

std::ostream& operator<<(std::ostream& output, PointArray &parr) {
    for(int i = 0; i < parr.getSize(); i++) {
        output << parr.data[i];
    }
    return output;
}

