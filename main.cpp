#include <iostream>
#include <vector>
#include <chrono>
#include <iomanip>
#include "testGenerator.h"
#include "bucketSort.h"
#include "heapSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "radixSort.h"
#include "radixSort2_16.h"
#include "shellSort.h"
#include "utils.h"

int main() {
    int T;
    std::cin >> T;
    
    SortFunc sortFunctions[7] = {
        bucketSort,
        heapSort,
        mergeSort,
        quickSort,
        radixSort,
        radixSort2_16,
        shellSort
    };

    std::string sortNames[7] = {
        "Bucket Sort",
        "Heap Sort",
        "Merge Sort",
        "Quick Sort",
        "Radix Sort b10",
        "Radix Sort b16",
        "Shell Sort"
    };

    for (int test = 1; test <= T; ++test) {
      size_t numElements;
      long long minVal, maxVal;
      std::cin >> numElements >> minVal >> maxVal;
      std::vector<long long> originalVector;
      
      try {
        originalVector = generateRandomVector(numElements, minVal, maxVal);
      } catch (int code) {
        std::cerr << "Generating vector has failed for test: " << test << "\n";
        return code;
      }
        
        std::vector<std::future<SortResult>> futures;

        for (int i = 0; i < 7; ++i) {
          futures.push_back(std::async(std::launch::async, runSortTask,
                                      i,
                                      originalVector,
                                      sortNames[i],
                                      sortFunctions[i],
                                      minVal,
                                      maxVal));
        }

        std::vector<SortResult> results(7);
        for (int i = 0; i < futures.size(); i++){
          results[i] = futures[i].get();
        }
        std::cout << "\nTest " << test << " || ";
        std::cout << "N = " << formatNumber(numElements) << " MinVal = " << formatNumber(minVal) << " MaxVal = " << formatNumber(maxVal) << "\n";
        std::cout << "\n";
        std::cout << std::left << std::setw(25) << "Algorithm" 
                  << std::setw(15) << "Time (ms)" 
                  << std::setw(15) << "Sorted" << "\n";
        std::cout << std::string(45, '-') << "\n";
        for (int i = 0; i < 7; ++i) {
            std::cout << std::left << std::setw(25) << results[i].name
                      << std::setw(15) << formatTime(results[i].durationMs)
                      << std::setw(15) << (results[i].sortedCorrectly ? "Yes" : "No") 
                      << "\n";
        }
        std::cout << std::string(45, '-') << "\n";

    }

    return 0;
}
