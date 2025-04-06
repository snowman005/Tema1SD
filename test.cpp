#include <iostream>
#include <vector>
#include "radixSort.h"
#include "radixSort2_16.h"
#include "mergeSort.h"
#include "shellSort.h"
#include "heapSort.h"
#include "bucketSort.h"
#include "quickSort.h"


int main() {
    std::vector<int> arr = {170, -45, 75 ,-90, 802, 24 ,2 ,66}; 

    int minNumber = arr.empty() ? 0 : *std::min_element(arr.begin(), arr.end());
    int maxNumber = arr.empty() ? 0 : *std::max_element(arr.begin(), arr.end());

    std::cout << "Original array: ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = {170, -45, 75 ,-90, 802, 24 ,2 ,66};
    BASE = 10;
    radixSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (base 10): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = {170, -45, 75 ,-90, 802, 24 ,2 ,66};
    BASE = 2;
    radixSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (base 2): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = {170, -45, 75 ,-90, 802, 24 ,2 ,66};
    radixSort2_16(arr, minNumber, maxNumber);
    std::cout << "Sorted array (base 16): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = {170, -45, 75 ,-90, 802, 24 ,2 ,66};
    mergeSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (merge sort): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = {170, -45, 75 ,-90, 802, 24 ,2 ,66};
    shellSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (shell sort): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = {170, -45, 75 ,-90, 802, 24 ,2 ,66};
    heapSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (heap sort): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = {170, -45, 75 ,-90, 802, 24 ,2 ,66};
    bucketSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (bucket sort): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";

    arr = {170, -45, 75 ,-90, 802, 24 ,2 ,66};
    quickSort(arr, minNumber, maxNumber);
    std::cout << "Sorted array (quick sort): ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n";


    return 0; 
}
