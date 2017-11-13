//
// Created by Anatoly on 14.11.2017.
//

#include <iostream>
#include "ApartmentHouse.h"

ApartmentHouse::ApartmentHouse() = default;

ApartmentHouse::ApartmentHouse(const std::string &city, const std::string &street, const std::string &building,
                               int levels, int apartments_count, int elevators_count) : Building(city, street,
                                                                                                 building),
                                                                                        levels(levels),
                                                                                        apartments_count(
                                                                                                apartments_count),
                                                                                        elevators_count(
                                                                                                elevators_count) {}

void ApartmentHouse::info() {
    Building::info();

    std::cout << "Apartment house info: " << std::endl;
    std::cout << "  Levels: " << this->levels << std::endl;
    std::cout << "  Apartments count: " << this->apartments_count << std::endl;
    std::cout << "  Elevators count: " << this->elevators_count << std::endl;
}

float ApartmentHouse::getAverageApartmentSquare(float total_square) {
    return total_square / apartments_count;
}

int ApartmentHouse::getLevels() const {
    return levels;
}

int ApartmentHouse::getApartmentsCount() const {
    return apartments_count;
}

int ApartmentHouse::getElevatorsCount() const {
    return elevators_count;
}
