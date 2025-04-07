#pragma once
#include <vector>
#include <algorithm>

void heapify(std::vector<long long>& arr, long long n, long long i) {
    long long largest = i;
    long long left = 2 * i + 1;
    long long right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(std::vector<long long>& arr, long long minNumber, long long maxNumber) {
    if (arr.empty()) return;
    
    long long n = arr.size();
    
    for (long long i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (long long i = n-1; i > 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}