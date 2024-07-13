#include <iostream>
using namespace std;

void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Menampilkan array sebelum perubahan pada iterasi ini
        cout << "Iterasi " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << " - Memasukkan " << key << endl;

        // Proses sorting
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        // Menampilkan array setelah perubahan pada iterasi ini
        cout << "Hasil: ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl << endl;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int data[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(data) / sizeof(data[0]);
    cout << "Array sebelum diurutkan: ";
    printArray(data, n);
    cout << endl;
    insertionsort(data, n);
    cout << "Data yang sudah diurutkan: ";
    printArray(data, n);
    return 0;
}
