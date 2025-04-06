#pragma once
#include <string>
#include <sstream>
#include <iomanip>
#include <future>
#include <vector>
#include <iostream>
#include <chrono>

using SortFunc = void(*)(std::vector<int>&, int, int);

struct SortResult {
    std::string name;
    long long durationMs;
    bool sortedCorrectly;
};

bool isSorted(const std::vector<int>& arr) {
  for (size_t i = 1; i < arr.size(); ++i) {
      if (arr[i-1] > arr[i]) {
          return false;
      }
  }
  return true;
}

std::string formatNumber(long long number) {
  std::ostringstream oss;
  if (number >= 1'000'000'000) {
      oss << std::fixed << std::setprecision(1) << (number / 1'000'000'000.0) << "B";
  } else if (number >= 1'000'000) {
      oss << std::fixed << std::setprecision(1) << (number / 1'000'000.0) << "M";
  } else if (number >= 1'000) {
      oss << std::fixed << std::setprecision(1) << (number / 1'000.0) << "K";
  } else {
      oss << number;
  }

  std::string result = oss.str();

  if (result.find(".0") != std::string::npos)
      result.erase(result.find(".0"), 2);

  return result;
}

std::string formatTime(long long milliseconds) {
  std::ostringstream oss;

  if (milliseconds < 1000) {
      oss << milliseconds << " ms";
  } else {
      double seconds = milliseconds / 1000.0;
      oss << std::fixed << std::setprecision(2) << seconds << " s";
  }

  return oss.str();
}

auto runSortTask = [](int i,
                      std::vector<int> vec,
                      const std::string& sortName,
                      auto sortFunc,
                      int minVal,
                      int maxVal) -> SortResult {
    auto start = std::chrono::high_resolution_clock::now();

    try {
        sortFunc(vec, minVal, maxVal);
    } catch (...) {
        std::cerr << "Algorithm " << sortName << " has thrown\n";
        return { sortName, -1, false };
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    bool sortedCorrectly = isSorted(vec);

    return { sortName, duration, sortedCorrectly };
};
