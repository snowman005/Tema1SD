#pragma once
#include <vector>
#include <algorithm>

int BASE = 10;

int getDigit(int number, int place) {
    return (number / place) % BASE;
}

void radixSort(std::vector<int>& arr, int minNumber, int maxNumber) {
    int size = arr.size();
    if (size == 0) {
        return;
    }

    int offset = 0;
    if (minNumber < 0) {
        offset = -minNumber;
        for (int& num : arr) {
            num += offset;
        }
    }

    int maxAdjusted = maxNumber + offset;

    for (int place = 1; maxAdjusted / place > 0; place *= BASE) {
        std::vector<int> count(BASE, 0);
        std::vector<int> output(size);

        for (int i = 0; i < size; ++i) {
            int digit = getDigit(arr[i], place);
            count[digit]++;
        }

        for (int i = 1; i < BASE; ++i) {
            count[i] += count[i - 1];
        }

        for (int i = size - 1; i >= 0; --i) {
            int digit = getDigit(arr[i], place);
            output[count[digit] - 1] = arr[i];
            count[digit]--;
        }

        arr = output;
    }

    if (offset > 0) {
        for (int& num : arr) {
            num -= offset;
        }
    }
}
