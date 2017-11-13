cmake_minimum_required(VERSION 3.9)
project(untitled)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(untitled main.cpp task3/task3.cpp task3/task3.h task3/FloatArray.cpp task3/FloatArray.h task4/Building.cpp task4/Building.h task4/ApartmentHouse.cpp task4/ApartmentHouse.h task4/task4.cpp task4/task4.h task5/Device.cpp task5/Device.h task5/TV.cpp task5/TV.h task5/Laptop.cpp task5/Laptop.h task5/task5.h task5/task5.cpp)
