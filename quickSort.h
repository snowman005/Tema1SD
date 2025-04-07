#pragma once
#include <vector>
#include <algorithm>

long long medianOfThree(std::vector<long long>& arr, long long left, long long right) {
    long long mid = left + (right - left) / 2;
    
    if (arr[right] < arr[left]) std::swap(arr[left], arr[right]);
    if (arr[mid] < arr[left]) std::swap(arr[mid], arr[left]);
    if (arr[right] < arr[mid]) std::swap(arr[right], arr[mid]);
    
    return mid;
}

long long partition(std::vector<long long>& arr, long long left, long long right) {
    long long pivotIndex = medianOfThree(arr, left, right);
    long long pivotValue = arr[pivotIndex];
    
    std::swap(arr[pivotIndex], arr[right]);
    
    long long storeIndex = left;
    for (long long i = left; i < right; ++i) {
        if (arr[i] < pivotValue) {
            std::swap(arr[i], arr[storeIndex]);
            ++storeIndex;
        }
    }
    
    std::swap(arr[storeIndex], arr[right]);
    return storeIndex;
}

void quickSortHelper(std::vector<long long>& arr, long long left, long long right) {
    if (left >= right) return;
    
    long long pivot = partition(arr, left, right);
    quickSortHelper(arr, left, pivot - 1);
    quickSortHelper(arr, pivot + 1, right);
}

void quickSort(std::vector<long long>& arr, long long minNumber, long long maxNumber) {
    if (arr.empty()) return;
    quickSortHelper(arr, 0, arr.size() - 1);
}