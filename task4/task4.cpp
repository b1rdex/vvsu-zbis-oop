//
// Created by Anatoly on 14.11.2017.
//

#include <iostream>
#include "task4.h"
#include "Building.h"
#include "ApartmentHouse.h"

void task4() {
    auto building1 = new Building();
    building1->info();

    auto building2 = new Building("Vladivostok", "Gogolya", "41");
    building2->info();
    std::cout << "Building2 street: " << building2->getAddressStreet() << std::endl;

    auto house1 = new ApartmentHouse();
    house1->info();

    auto house2 = new ApartmentHouse("Vladivostok", "Nekrasovskaya", "99", 11, 164, 3);
    house2->info();
    std::cout << "Apartment house 2 city:" << house2->getAddressCity() << std::endl;
    std::cout << "Apartment house 2 building number:" << house2->getAddressBuilding() << std::endl;
    std::cout << "Apartment house 2 levels:" << house2->getLevels() << std::endl;
    std::cout << "Apartment house 2 apartments count:" << house2->getApartmentsCount() << std::endl;
    std::cout << "Apartment house 2 elevators count:" << house2->getElevatorsCount() << std::endl;
    std::cout << "Apartment house 2 average apartment square: " << house2->getAverageApartmentSquare(6543) << std::endl;
}


