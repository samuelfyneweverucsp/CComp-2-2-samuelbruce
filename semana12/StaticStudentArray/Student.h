#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <string>


class Student {
private:
    std::string name;
    int age;
    int code;
public:
    Student(std::string, int, int);
    Student();
    void print();
    std::string getName();
    int getAge();
    int getCode();
};


#endif