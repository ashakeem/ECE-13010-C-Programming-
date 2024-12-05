#include <stdio.h>

// helper to find maximum of an array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// insertion sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    // (a)
    int a[] = {10, 30, 50, 70, 90, 100, 80, 60, 40, 20};
    int size_a = sizeof(a) / sizeof(a[0]);
    printf("The size of array a is: %d\n", size_a);

    // (b)
    int b[20] = {10, 30, 50, 70, 90, 100, 80, 60, 40, 20}; // Rest auto initialized to 0
    int nonzero_count = 0;
    for (int i = 0; i < 20; i++) {
        if (b[i] != 0) {
            nonzero_count++;
        }
    }
    printf("The number of nonzero elements in array b is: %d\n", nonzero_count);

    // (c)
    int max_a = findMax(a, size_a);
    printf("The maximum value in array a is: %d\n", max_a);

    // (d)
    insertionSort(a, size_a);
    printf("The sorted array is: ");
    for (int i = 0; i < size_a; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
