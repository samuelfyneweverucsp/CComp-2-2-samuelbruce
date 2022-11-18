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
    this->size = o.size;
    this->data = new Point[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

int DynamicPointArray::getSize() const {
    return size;
}

DynamicPointArray::~DynamicPointArray() {
    delete[] data;
}

void DynamicPointArray::resize( int newSize ) {
    Point *pts = new Point[newSize];
    int minSize = ( newSize > size ? size : newSize );
    for (int i = 0; i < minSize ; i++)
        pts[i] = data[i];
    delete [] data;
    size = newSize ;
    data = pts ;
}

void DynamicPointArray::clear () {
    resize (0) ;
}

void DynamicPointArray::push_back(Point elem) {
    resize(size + 1);
    data[ size - 1] = elem;
}

void DynamicPointArray::insert(Point elem, int pos) {
    resize(size + 1);
    for (int i = size - 1; i > pos; i --) {
        data[i] = data[i -1];
    }
    data[pos] = elem;
} 

void DynamicPointArray::remove(int pos) {
    if(pos >= 0 && pos < size) {
        for(int i = pos; i < size - 2; i++) {
            data[i] = data[i + 1];
        }
        resize ( size - 1);
    }
} 

void DynamicPointArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        data[i].print();
    std::cout << "]" << std::endl;
}


