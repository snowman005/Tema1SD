#pragma once
#include <vector>

void bucketSort(std::vector<int>& arr, int minNumber, int maxNumber) {
    if (arr.empty()) return;
    
    int n = arr.size();
    
    int range = maxNumber - minNumber + 1;
    
    std::vector<std::vector<int>> buckets(n);
    
    for (int i = 0; i < n; i++) {
        int bucketIndex = (arr[i] - minNumber) * (n - 1) / range;
        buckets[bucketIndex].push_back(arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < buckets[i].size(); j++) {
            int key = buckets[i][j];
            int k = j - 1;
            
            while (k >= 0 && buckets[i][k] > key) {
                buckets[i][k + 1] = buckets[i][k];
                k--;
            }
            
            buckets[i][k + 1] = key;
        }
    }
    
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}