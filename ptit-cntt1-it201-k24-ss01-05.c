#include <stdio.h>


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
      
        for (int j = 0; j < n - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // => Độ phức tạp thời gian: O(n^2)
    // => Độ phức tạp không gian: O(1) (sắp xếp tại chỗ)
}
