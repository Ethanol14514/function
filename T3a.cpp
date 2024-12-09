#include "header.h"
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void T3a() {
    int a[10];
    cout << "Enter 10 numbers:\n>";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    bubbleSort(a, 10);
    cout << "Sorted array is:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}