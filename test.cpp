#include <iostream>
#include <vector>
#include "radixSort.h"
#include "radixSort2_16.h"


int main() {
    std::vector<int> arr = {1, 3, 2, 1}; 

    int minNumber = arr.empty() ? 0 : *std::min_element(arr.begin(), arr.end());
    int maxNumber = arr.empty() ? 0 : *std::max_element(arr.begin(), arr.end());

    std::cout << "Original array: ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    BASE = 10;
    radixSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (base 10): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    BASE = 2;
    radixSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (base 2): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    radixSort2_16(arr, minNumber, maxNumber);
    std::cout << "Sorted array (base 16): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    return 0;
}
