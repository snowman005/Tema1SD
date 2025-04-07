#pragma once
#include <vector>
#include <algorithm>

long long BASE = 10;

long long getDigit(long long number, long long place) {
    return (number / place) % BASE;
}

void radixSort(std::vector<long long>& arr, long long minNumber, long long maxNumber) {
    long long size = arr.size();
    if (size == 0) {
        return;
    }

    long long offset = 0;
    if (minNumber < 0) {
        offset = -minNumber;
        for (long long& num : arr) {
            num += offset;
        }
    }

    long long maxAdjusted = maxNumber + offset;

    for (long long place = 1; maxAdjusted / place > 0; place *= BASE) {
        std::vector<long long> count(BASE, 0);
        std::vector<long long> output(size);

        for (long long i = 0; i < size; ++i) {
            long long digit = getDigit(arr[i], place);
            count[digit]++;
        }

        for (long long i = 1; i < BASE; ++i) {
            count[i] += count[i - 1];
        }

        for (long long i = size - 1; i >= 0; --i) {
            long long digit = getDigit(arr[i], place);
            output[count[digit] - 1] = arr[i];
            count[digit]--;
        }

        arr = output;
    }

    if (offset > 0) {
        for (long long& num : arr) {
            num -= offset;
        }
    }
}
