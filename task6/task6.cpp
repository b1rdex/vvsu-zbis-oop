//
// Created by Anatoly on 14.11.2017.
//

#include <iostream>
#include "templated_avg.cpp"

void task6() {
    float i1[5] = { 1.f, 2.f, 3.f, 4.f, 5.f };
    std::cout << "i1 avg: " << templated_avg(i1, 5) << std::endl;

    int i2[5] = { 1, 2, 3, 4, 5 };
    std::cout << "i2 avg: " << templated_avg(i2, 5) << std::endl;
}
