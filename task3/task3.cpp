//
// Created by Anatoly on 13.11.2017.
//

#include "task3.h"
#include "FloatArray.h"

void task3() {
    auto array = FloatArray(15);
    array.addItem(1.5);
    array.addItem(3.14);
    array.addItem(2.17);
    array.info();

    array.removeItem(0);
    array.info();
    array.removeItem(1);
    array.info();

    array.addItem(2);
    array.addItem(1);
    array.addItem(0);
    array.info();

    array++;
    array.info();
}
