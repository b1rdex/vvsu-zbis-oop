//
// Created by Anatoly on 14.11.2017.
//

#ifndef UNTITLED_TV_H
#define UNTITLED_TV_H


#include "Device.h"

class TV : public Device {
public:
    void info() override;

    void welcome() override;

    void bye() override;
};


#endif //UNTITLED_TV_H
