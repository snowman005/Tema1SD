#include <iostream>
#include <vector>
#include "radixSort.h"
#include "radixSort2_16.h"
#include "mergeSort.h"
#include "shellSort.h"
#include "heapSort.h"
#include "bucketSort.h"
#include "quickSort.h"
#include "testGenerator.h"


int main() {
    std::vector<long long> initial = generateRandomVector(30, 1, 300);
    std::vector<long long> arr = initial;

    int minNumber = arr.empty() ? 0 : *std::min_element(arr.begin(), arr.end());
    int maxNumber = arr.empty() ? 0 : *std::max_element(arr.begin(), arr.end());

    std::cout << "Original array: ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = initial;
    BASE = 10;
    radixSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (base 10): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = initial;
    BASE = 2;
    radixSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (base 2): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = initial;
    radixSort2_16(arr, minNumber, maxNumber);
    std::cout << "Sorted array (base 16): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = initial;
    mergeSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (merge sort): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = initial;
    shellSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (shell sort): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = initial;
    heapSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (heap sort): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = initial;
    bucketSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (bucket sort): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = initial;
    quickSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (quick sort): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";


    return 0; 
}
