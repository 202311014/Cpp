#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

int largestSumClosedSequence(const std::vector<int>& parking_slots) {
    int n = parking_slots.size();
    int totalSum = 0;
    int arraySum = 0;
    int maxEndingHere = INT_MIN;
    int maxSoFar = INT_MIN;
    int minEndingHere = INT_MAX;
    int minSoFar = INT_MAX;

    for (int i = 0; i < n; ++i) {
        totalSum += parking_slots[i];
        arraySum += parking_slots[i];

        maxEndingHere = std::max(parking_slots[i], maxEndingHere + parking_slots[i]);
        maxSoFar = std::max(maxSoFar, maxEndingHere);

        minEndingHere = std::min(parking_slots[i], minEndingHere + parking_slots[i]);
        minSoFar = std::min(minSoFar, minEndingHere);
    }

    if (maxSoFar < 0) {
        return maxSoFar;
    }

    return std::max(maxSoFar, totalSum - minSoFar);
}

int main() {
    int parkingSlotSize;
    std::cin >> parkingSlotSize;

    std::vector<int> parking_slots(parkingSlotSize);
    for (int i = 0; i < parkingSlotSize; ++i) {
        std::cin >> parking_slots[i];
    }

    int result = largestSumClosedSequence(parking_slots);
    std::cout << result << std::endl;

    return 0;
}
