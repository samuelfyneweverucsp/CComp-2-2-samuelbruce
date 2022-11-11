#ifndef __STUDENTARRAY_H__
#define __STUDENTARRAY_H__

#include <iostream>
#include "Student.h"

class StudentArray {
    private:
        int size;
        Student *data;
        friend std::ostream& operator<<(std::ostream &output, const StudentArray);
    public:
        StudentArray(int size);
        StudentArray(const StudentArray &o);

        void setAt(int index, Student value);
        Student getAt(int index) const;
        int getSize() const;
        void print() const;

        Student* getData();

        ~StudentArray();
};



#endif