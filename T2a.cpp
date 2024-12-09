#include "header.h"
bool primeNumber(int number) {
    if (number == 2) {
        return true;
    }
    if (number < 2) {
        return false;
    }
    if (number % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
using namespace std;
void T2a() {
    int number;
    cout << "Enter a number: \n>";
    cin >> number;
    cout << "The prime factors of " << number << ":\n";
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            if (primeNumber(i)) {
                cout << i << ' ';
            }
        }
    }
    cout << endl;
}