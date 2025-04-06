#pragma once
#include <vector>
#include <algorithm>

void bucketSort(std::vector<int>& arr, int minNumber, int maxNumber) {

    int range = maxNumber - minNumber + 1;
    
    int n = arr.size();
    int numBuckets = std::min(static_cast<int>(std::sqrt(n)), 200000);
    
    std::vector<std::vector<int>> buckets(numBuckets);
    
    for (int num : arr) {
        int bucketIndex = static_cast<int>((static_cast<long long>(num) - minNumber) * (numBuckets - 1) / range);
        buckets[bucketIndex].push_back(num);
    }
    
    for (auto& bucket : buckets) {
        std::sort(bucket.begin(), bucket.end());
    }
    
    int index = 0;
    for (const auto& bucket : buckets) {
        for (int num : bucket) {
            arr[index++] = num;
        }
    }
}