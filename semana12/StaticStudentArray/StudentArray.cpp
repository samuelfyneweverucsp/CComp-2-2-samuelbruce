#include "StudentArray.h"
#include "Student.h"
#include <iostream>

StudentArray::StudentArray(int size) {
    data = new Student[size];
    this->size = size;
}

StudentArray::StudentArray(const StudentArray &o) {
    size = o.size;
    data = new Student[o.size];
    for(int i = 0; i < size; i++) {
        data[i] = o.data[i];
    }
}

void StudentArray::setAt(int index, Student value) {
    if(index >= 0 && index < size) {data[index] = value;}
}

Student StudentArray::getAt(int index) const {
    if(index >= 0 && index < size) {return data[index];}
}

StudentArray::~StudentArray() = default;

int StudentArray::getSize() const {
    return size;
}

void StudentArray::print() const {
    for(int i = 0; i < this->getSize(); i++) {
        this->data[i].print();
        std::cout << std::endl;
    }
}

Student* StudentArray::getData() {return this->data;}

std::ostream& operator<<(std::ostream& output, StudentArray &student) {
    for(int i = 0; i < student.getSize(); i++) {
        output << "Student name: " << student.getData()[i].getName()
        << "Age: " << student.getData()[i].getAge()
        << "Code: " << student.getData()[i].getCode() << std::endl;
    }
    return output;
}


