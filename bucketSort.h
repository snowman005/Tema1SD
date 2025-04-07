#pragma once
#include <vector>
#include <algorithm>

void bucketSort(std::vector<long long>& arr, long long minNumber, long long maxNumber) {

    long long range = maxNumber - minNumber + 1;
    
    long long n = arr.size();
    long long numBuckets = std::min(static_cast<long long>(std::sqrt(n)), static_cast<long long>(5000000));
    
    std::vector<std::vector<long long>> buckets(numBuckets);
    
    for (long long num : arr) {
        long long bucketIndex = static_cast<long long>((static_cast<long long>(num) - minNumber) * (numBuckets - 1) / range);
        buckets[bucketIndex].push_back(num);
    }
    
    for (auto& bucket : buckets) {
        std::sort(bucket.begin(), bucket.end());
    }
    
    long long index = 0;
    for (const auto& bucket : buckets) {
        for (long long num : bucket) {
            arr[index++] = num;
        }
    }
}