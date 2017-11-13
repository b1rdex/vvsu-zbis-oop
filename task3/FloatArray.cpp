//
// Created by Anatoly on 13.11.2017.
//

#include <iostream>
#include "FloatArray.h"

FloatArray::FloatArray(int size) {
    if (size < 0) {
        throw std::logic_error("Size must be > 0");
    }

    this->size = size;
    items = new float[size];
    for (int i = 0; i < size; i++) {
        items[i] = 0;
    }
    current = 0;
}

void FloatArray::addItem(float item) {
    if (current >= size) {
        throw std::runtime_error("Array is full already");
    }

    items[current++] = item;
}

void FloatArray::removeItem(int position) {
    if (position < 0) {
        throw std::logic_error("Position must be greater than 0");
    }
    if (position > current) {
        throw std::runtime_error("Out of range");
    }

    auto *newItems = new float[size];
    int current = 0;
    for (int i = 0; i < size; i++) {
        if (position == i) {
            continue;
        }
        newItems[current++] = items[i];
    }

    items = newItems;
    this->current -= 1;
}

void FloatArray::info() {
    std::cout << "Array contents: " << std::endl;
    for (int i = 0; i < current; i++) {
        std::cout << "[" << i << "]: " << items[i] << std::endl;
    }
}

void FloatArray::operator++(int) {
    auto *newItems = new float[size];
    for (int i = 0; i < size; i++) {
        float item = items[i];
        newItems[i] = item + 1;
    }

    items = newItems;
}