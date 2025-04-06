#pragma once
#include <vector>
#include <algorithm>

int medianOfThree(std::vector<int>& arr, int left, int right) {
    int mid = left + (right - left) / 2;
    
    if (arr[right] < arr[left]) std::swap(arr[left], arr[right]);
    if (arr[mid] < arr[left]) std::swap(arr[mid], arr[left]);
    if (arr[right] < arr[mid]) std::swap(arr[right], arr[mid]);
    
    return mid;
}

int partition(std::vector<int>& arr, int left, int right) {
    int pivotIndex = medianOfThree(arr, left, right);
    int pivotValue = arr[pivotIndex];
    
    std::swap(arr[pivotIndex], arr[right]);
    
    int storeIndex = left;
    for (int i = left; i < right; ++i) {
        if (arr[i] < pivotValue) {
            std::swap(arr[i], arr[storeIndex]);
            ++storeIndex;
        }
    }
    
    std::swap(arr[storeIndex], arr[right]);
    return storeIndex;
}

void quickSortHelper(std::vector<int>& arr, int left, int right) {
    if (left >= right) return;
    
    int pivot = partition(arr, left, right);
    quickSortHelper(arr, left, pivot - 1);
    quickSortHelper(arr, pivot + 1, right);
}

void quickSort(std::vector<int>& arr, int minNumber, int maxNumber) {
    if (arr.empty()) return;
    quickSortHelper(arr, 0, arr.size() - 1);
}