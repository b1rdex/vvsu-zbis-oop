#include <iostream>
#include "task3/FloatArray.h"
#include "task3/task3.h"
#include "task4/task4.h"
#include "task5/task5.h"
#include "task6/task6.h"

int main() {
    int task;
    while (true) {
        std::cout << "Enter task number: ";
        std::cin >> task;
        task = 6;
        switch (task) {
            case 0:
                std::cout << "Bye" << std::endl;
                return 0;

            default:
                std::cout << "No such task" << std::endl;
                break;

            case 3:
                task3();
                break;

            case 4:
                task4();
                break;

            case 5:
                task5();
                break;

            case 6:
                task6();
                break;
        }

        // todo: remove
        break;
    }

    return 0;
}

