#include <stdio.h>

int findLargest(int arr[], int n) {
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    // Hardcoded array
    int arr[] = {10, 22, 43, 200, 454};
    
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Finding and printing the largest element
    int largest = findLargest(arr, n);
    printf("The largest element is: %d\n", largest);

    return 0;
}
