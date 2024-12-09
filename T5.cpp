#include "header.h"
using namespace std;
int fracNumber(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}
void T5() {
    int sum = 0;
    cout << "Amicable numbers less than 500 are:" << endl;
    for (int i = 1; i < 250; i++) {
        int x = fracNumber(i);
        if (fracNumber(x) == i && x != i) {
            cout << i << '&' << x << endl;
        }
    }
}
