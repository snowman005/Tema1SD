#pragma once
#include <vector>

void merge(std::vector<long long>& arr, long long left, long long mid, long long right) {
    std::vector<long long> temp(right - left + 1);
    long long i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        temp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    
    std::copy(temp.begin(), temp.end(), arr.begin() + left);
}

void mergeSortHelper(std::vector<long long>& arr, long long left, long long right) {
    if (left >= right) return;
    
    long long mid = left + (right - left) / 2;
    mergeSortHelper(arr, left, mid);
    mergeSortHelper(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void mergeSort(std::vector<long long>& arr, long long minNumber, long long maxNumber) {
    if (arr.empty()) return;
    mergeSortHelper(arr, 0, arr.size() - 1);
}