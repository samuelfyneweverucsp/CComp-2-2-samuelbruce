#include <iostream>
#include <string>
#include "IntArray.h"


using namespace std;

IntArray::IntArray(int size) {
    data = new int[size];
    this->size = size;
}

IntArray::IntArray(const IntArray &o) {
    size = o.size;
    data = new int[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

void IntArray::setAt(int index, int value) {
    if(index >= 0 && index < size) // validación de índice
        data[index] = value;
}

int IntArray::getAt(int index) const {
    if(index >= 0 && index < size)
        return data[index];            
}

int IntArray::getSize() const {
    return size;
}

void IntArray::print() const {
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << std::endl;
}


IntArray::~IntArray() { // destructor
    delete [] data;
}

ostream& operator<<(ostream& output, const IntArray arr) {
    for (size_t i = 0; i < arr.getSize(); i++)
    {
        output << arr.getAt(i) << " ";
    }
    return output;
    
}