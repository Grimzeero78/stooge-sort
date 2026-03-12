#include <iostream>
using namespace std;

void stoogeSort(int arr[], int l, int h) {
    if (l >= h)
        return;

    // If first element is bigger than last, swap
    if (arr[l] > arr[h]) {
        int temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
    }

    // If there are more than 2 elements
    if (h - l + 1 > 2) {
        int t = (h - l + 1) / 3;

        // Recursively sort
        stoogeSort(arr, l, h - t);
        stoogeSort(arr, l + t, h);
        stoogeSort(arr, l, h - t);
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stoogeSort(arr, 0, n - 1);

    cout << "Sorted array (Ascending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

