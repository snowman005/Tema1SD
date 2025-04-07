#pragma once
#include <vector>

void shellSort(std::vector<long long>& arr, long long minNumber, long long maxNumber) {
    if (arr.empty()) return;

    if (maxNumber - minNumber >= 100000) return;
    
    long long n = arr.size();
    for (long long gap = n/2; gap > 0; gap /= 2) {
        for (long long i = gap; i < n; ++i) {
            long long temp = arr[i];
            long long j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}