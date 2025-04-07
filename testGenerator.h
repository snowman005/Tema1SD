#pragma once

#include <vector>
#include <random>

std::vector<long long> generateRandomVector(size_t numElements, long long minVal, long long maxVal) {
    std::vector<long long> result;
    result.reserve(numElements);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<long long> distrib(minVal, maxVal);

    for (size_t i = 0; i < numElements; ++i) {
        result.push_back(distrib(gen));
    }

    return result;
}
