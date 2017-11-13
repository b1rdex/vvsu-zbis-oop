#include <iostream>
#include "task3/FloatArray.h"
#include "task3/task3.h"
#include "task4/task4.h"

int main() {
    int task;
    while (true) {
        std::cout << "Enter task number: ";
        //std::cin >> task;
        task = 4;
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
        }

        // todo: remove
        break;
    }

    return 0;
}

