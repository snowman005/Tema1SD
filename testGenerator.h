#pragma once

#include <vector>
#include <random>

std::vector<int> generateRandomVector(size_t numElements, int minVal, int maxVal) {
  std::vector<int> result;
  result.reserve(numElements);

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> distrib(minVal, maxVal);

  for (size_t i = 0; i < numElements; ++i) {
      result.push_back(distrib(gen));
  }

  return result;
}
