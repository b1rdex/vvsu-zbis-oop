//
// Created by Anatoly on 14.11.2017.
//

#ifndef UNTITLED_APARTMENTHOUSE_H
#define UNTITLED_APARTMENTHOUSE_H


#include "Building.h"

class ApartmentHouse : public Building {
private:
    int levels;
    int apartments_count;
    int elevators_count;
public:
    ApartmentHouse();

    ApartmentHouse(const std::string &city, const std::string &street, const std::string &building, int levels,
                   int apartments_count, int elevators_count);

    float getAverageApartmentSquare(float total_square);

    void info() override;

    int getLevels() const;

    int getApartmentsCount() const;

    int getElevatorsCount() const;
};


#endif //UNTITLED_APARTMENTHOUSE_H
