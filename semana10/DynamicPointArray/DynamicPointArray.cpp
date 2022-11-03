#include <iostream>
#include "DynamicPointArray.h"
#include "Point.h"


DynamicPointArray::DynamicPointArray() {
    this->size = 0;
    data = new Point[0];
}

DynamicPointArray::DynamicPointArray(const Point arr[], int size){
    this->size = size;
    data = new Point[size];
    for(int i = 0; i < size; i++)
        data[i] = arr[i];
}

DynamicPointArray::DynamicPointArray(const DynamicPointArray &o) {
    size = o.size;
    Point *data = new Point[o.size];
    for(int i = 0; i < size; i++) {
        o.data[i].print();
        data[i] = o.data[i];
        // data[i].setX(o.data[i].getX());
        // data[i].setY(o.data[i].getY());
    }
}


int DynamicPointArray::getSize() const {
    return size;
}

void DynamicPointArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        data[i].print();
    std::cout << "]" << std::endl;
}

void DynamicPointArray::push_back(Point elem) {
    // 1
    Point *tmp = new Point[size + 1];
    // 2
    for(int i = 0; i < size; i++)
        tmp[i] = data[i];
    // 3
    tmp[size] = elem;
    // 4
    size += 1;
    // 5
    delete [] data;
    // 6
    data = tmp;
}

void DynamicPointArray::insert(Point elem, int pos) {
    // 1
    Point *tmp = new Point[size + 1];
    // 2
    for(int i = 0, j = 0; i < size; i++, j++) {
        if( j == pos) {
            tmp[pos] = elem;
            i--;
        } else {
            tmp[j] = data[i];
        }        
    }
    // 3
    size += 1;
    // 4
    delete [] data;
    // 5
    data = tmp;
} 

void DynamicPointArray::remove(int pos) {
    // 1: reservar datos
    Point *tmp = new Point[size - 1];
    // 2: copiar datos
    for(int i = 0; i < pos; i++) {
        tmp[i] = data[i]; 
    }
    // 2: seguir copiando despues de saltar el pos
    for(int j = pos; j < size - 1; j++) {
        tmp[j] = data[j + 1];
    }
    // 3
    size -= 1;
    // 4
    delete [] data;
    // 5
    data = tmp;

} 

DynamicPointArray::~DynamicPointArray() {
    delete[] data;
}


