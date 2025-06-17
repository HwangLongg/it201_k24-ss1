#include <stdio.h>

// Cách 1: Dùng vòng lặp
int sumLoop(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
    // Time Complexity: O(n)
}

// Cách 2: Dùng công thức toán học
int sumFormula(int n) {
    return n * (n + 1) / 2;
    // Time Complexity: O(1)
}
