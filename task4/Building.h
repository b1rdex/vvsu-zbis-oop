//
// Created by Anatoly on 14.11.2017.
//

#include <string>

#ifndef UNTITLED_BUILDING_H
#define UNTITLED_BUILDING_H


class Building {
private:
    std::string address_city;
    std::string address_street;
    std::string address_building;
public:
    Building();

    Building(std::string city, std::string street, std::string building);

    virtual void info();

    const std::string &getAddressCity() const;

    const std::string &getAddressStreet() const;

    const std::string &getAddressBuilding() const;
};


#endif //UNTITLED_BUILDING_H
