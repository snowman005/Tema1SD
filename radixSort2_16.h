#pragma once
#include <vector>
#include <algorithm>
#include <cstdint>

constexpr long long BASE1 = 1 << 16;
constexpr long long MASK = BASE1 - 1;

long long getDigitBitwise(long long number, long long shift) {
    return (number >> shift) & MASK;
}

void radixSort2_16(std::vector<long long>& arr, long long minNumber, long long maxNumber) {
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

    for (long long shift = 0; (maxAdjusted >> shift) > 0 && shift < 64; shift += 16) {
        std::vector<long long> count(BASE1, 0);
        std::vector<long long> output(size);

        for (long long i = 0; i < size; ++i) {
            long long digit = getDigitBitwise(arr[i], shift);
            count[digit]++;
        }

        for (long long i = 1; i < BASE1; ++i) {
            count[i] += count[i - 1];
        }

        for (long long i = size - 1; i >= 0; --i) {
            long long digit = getDigitBitwise(arr[i], shift);
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
