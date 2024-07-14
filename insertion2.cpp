#include <iostream>
using namespace std;

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function for insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
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
    int n;

    // Ask user for the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "The number of elements must be greater than 0." << endl;
        return 1;
    }

    int* arr = new int[n];

    // Ask user for the elements of the array
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the array before sorting
    cout << "Array before sorting: " << endl;
    printArray(arr, n);

    // Sort the array using insertion sort
    insertionSort(arr, n);

    // Print the array after sorting
    cout << "Array after sorting: " << endl;
    printArray(arr, n);

    // Delete the allocated memory
    delete[] arr;

    return 0;
}
