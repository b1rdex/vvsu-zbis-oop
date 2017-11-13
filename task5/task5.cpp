//
// Created by Anatoly on 14.11.2017.
//

#include "task5.h"
#include "Device.h"
#include "TV.h"
#include "Laptop.h"

void task5() {
    Device *devices[2];

    TV tv;
    devices[0] = &tv;

    Laptop laptop;
    devices[1] = &laptop;

    for (auto &device : devices) {
        device->welcome();
        device->bye();
    }
}