#include "Student.h"
#include "StudentArray.h"
#include <iostream>

using namespace std;

int main () {
    Student samu("Samuel", 21, 1413438);
    Student rodri("Rodrigo", 17, 165664);
    Student nico1("Nicolas Quantanilla", 18, 8022489);
    Student Joao("J", 54, 0);
    Student nico2("Nicky", 18, 55555);
    StudentArray miArr = StudentArray(5);
    miArr.setAt(0, samu);
    miArr.setAt(1, rodri);
    miArr.setAt(2, nico1);
    miArr.setAt(3, Joao);
    miArr.setAt(4, nico2);
    // cout << miArr;
    miArr.print();
}