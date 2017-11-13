//
// Created by Anatoly on 14.11.2017.
//

#ifndef UNTITLED_LAPTOP_H
#define UNTITLED_LAPTOP_H


#include "Device.h"

class Laptop : public Device {
public:
    void info() override;

    void welcome() override;

    void bye() override;
};


#endif //UNTITLED_LAPTOP_H
