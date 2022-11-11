#include "Student.h"

#include <iostream>

Student::Student(std::string _name, int _age, int _code) 
: name(_name), age(_age), code(_code) {}

Student::Student() {
    name = " ";
    age = 0;
    code = 0;
}

void Student::print() {
    std::cout << "Student name: " << name
    << "Age: " << age << "Code: " << code << std::endl;
}

std::string Student::getName() {return name;}
int Student::getAge() {return age;}
int Student::getCode() {return code;}

