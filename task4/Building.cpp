//
// Created by Anatoly on 14.11.2017.
//

#include "Building.h"

#include <utility>
#include <iostream>

Building::Building() = default;

Building::Building(std::string city, std::string street, std::string building) {
    this->address_city = std::move(city);
    this->address_street = std::move(street);
    this->address_building = std::move(building);
}

void Building::info() {
    std::cout << "Building info: " << std::endl;
    std::cout << "  City: " << this->address_city << std::endl;
    std::cout << "  Street: " << this->address_street << std::endl;
    std::cout << "  Building: " << this->address_building << std::endl;
}

const std::string &Building::getAddressCity() const {
    return address_city;
}

const std::string &Building::getAddressStreet() const {
    return address_street;
}

const std::string &Building::getAddressBuilding() const {
    return address_building;
}
