//
// Created by Anatoly on 13.11.2017.
//

#ifndef UNTITLED_FLOATARRAY_H
#define UNTITLED_FLOATARRAY_H


#include <vector>

class FloatArray {
private:
    int size;
    int current;
    float *items;
public:
    explicit FloatArray(int size);

    void addItem(float item);

    void removeItem(int position);

    void info();

    void operator++(int);
};


#endif //UNTITLED_FLOATARRAY_H
