#pragma once
#include <vector>
#include <algorithm>
#include <cstdint>

constexpr int BASE1 = 1 << 16;
constexpr int MASK = BASE1 - 1;

int getDigitBitwise(int number, int shift) {
    return (number >> shift) & MASK;
}

void radixSort2_16(std::vector<int>& arr, int minNumber, int maxNumber) {
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

    for (int shift = 0; (maxAdjusted >> shift) > 0; shift += 16) {
        std::vector<int> count(BASE1, 0);
        std::vector<int> output(size);

        for (int i = 0; i < size; ++i) {
            int digit = getDigitBitwise(arr[i], shift);
            count[digit]++;
        }

        for (int i = 1; i < BASE1; ++i) {
            count[i] += count[i - 1];
        }

        for (int i = size - 1; i >= 0; --i) {
            int digit = getDigitBitwise(arr[i], shift);
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
