#include <stdio.h>
#include <stdbool.h>

// Cách 1: Duyệt hai vòng lặp để so sánh từng cặp phần tử
bool hasDuplicateBruteForce(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
    // => Độ phức tạp thời gian: O(n^2)
    // => Độ phức tạp không gian: O(1)
}

// Cách 2: Dùng mảng đánh dấu vì phần tử nằm trong [0, 1000]
bool hasDuplicateUsingFlag(int arr[], int n) {
    
    bool flag[1001] = {false};

    for (int i = 0; i < n; i++) {
        if (flag[arr[i]]) {
            return true; 
        }
        flag[arr[i]] = true;
    }
    return false;
    // => Độ phức tạp thời gian: O(n)
    // => Độ phức tạp không gian: O(1), vì kích thước flag cố định (1001)
}
