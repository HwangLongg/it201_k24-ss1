#include <stdio.h>

int main() {
    int arr[] = {4, 6, 2, 4, 3, 4, 6, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    int freq[1001] = {0}; 

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    
    int maxCount = 0;
    int mostFrequent = -1;

    for (int i = 0; i <= 1000; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            mostFrequent = i;
        }
    }

 
    printf("Phan tu xuat hien nhieu nhat la: %d\n", mostFrequent);
    printf("So lan xuat hien: %d\n", maxCount);

    return 0;

    // => Độ phức tạp thời gian: O(n + 1001) = O(n)
    // => Độ phức tạp không gian: O(1001) = O(1) vì kích thước cố định
}
