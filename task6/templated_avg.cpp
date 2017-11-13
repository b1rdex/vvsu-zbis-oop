//
// Created by Anatoly on 14.11.2017.
//

template<class T>
double templated_avg(T items[], int count) {
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += items[i];
    }

    return sum / count;
}