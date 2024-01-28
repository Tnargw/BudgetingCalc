// ArraySumCalculator.cpp
#include "ArraySumCalculator.h"

int ArraySumCalculator::calculateSum(const int* array, int size) const {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum;
}
