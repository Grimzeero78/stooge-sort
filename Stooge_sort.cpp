#include <iostream>
using namespace std;

void stoogeSort(int arr[], int l, int h) {
    //best case if it has one element its already sorted
    if (l >= h)
        return;

    ////if the first(l) element is larger than the last(h) swap them
    if (arr[l] > arr[h]) {
        int temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
    }
//recursive step if array has more than two elements divide it into 3 parts 
//the first 2/3 last 2/3 then first 2/3 this is why its ineficient
//h-l+1 is the length of our array in terms of indexing azin 
//lets say h=8 l=0 so it will be 8-0+1 =9 to get the length of our array
    if (h - l + 1 > 2) {
        int t = (h - l + 1) / 3;

        // Recursively sort
        stoogeSort(arr, l, h - t);//from l to h-t
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
    	//calling our function
    stoogeSort(arr, 0, n - 1);

    cout << "Sorted array (Ascending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


