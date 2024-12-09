#include "header.h"
using namespace std;
short compare(int a, int b) {
    if (a > b) return 1;
    else if (a < b) return -1;
    else return 0;
}
void T5a() {
    int arr1[10], arr2[10];
    int a = 0, b = 0, c = 0;
    cout << "Enter 10 numbers for elements of array1" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr1[i];
    }
    cout << "Enter 10 numbers for elements of array2" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < 10; i++) {
        if (arr1[i] > arr2[i]) {
            a++;
        }
        else if (arr1[i] < arr2[i]) {
            c++;
        }
        else {
            b++;
        }
    }
    cout << "There are " << a << " times of elements in array1 greater than array2.\n" << b << " times of elements equal.\n" << c << " times of elements in array1 lesser than array2" << endl;

}