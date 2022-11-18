#ifndef __DYNAMICINTARRAY_H__
#define __DYNAMICINTARRAY_H__

#include "Point.h"

class DynamicPointArray {
        int size;
        Point *data;
        void resize (int size );
    public:
        DynamicPointArray();
        DynamicPointArray(const Point arr[], int size);
        DynamicPointArray(const DynamicPointArray &o);

        int getSize() const;
        void print() const;

        void clear ();
        void push_back(Point elem);
        void insert(Point elem, int pos);
        void remove(int pos);

        ~DynamicPointArray();
};

#endif
