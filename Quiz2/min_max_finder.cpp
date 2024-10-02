
#include <iostream>
using namespace std;

void findMinMax(int arr[], int size) {
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;
}

int main() {
    int arr[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    findMinMax(arr, 5);

    return 0;
}
