#pragma once
#include <vector>

void shellSort(std::vector<int>& arr, int minNumber, int maxNumber) {
    if (arr.empty()) return;

    if (maxNumber - minNumber >= 100000) return;
    
    int n = arr.size();
    for (int gap = n/2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; ++i) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}