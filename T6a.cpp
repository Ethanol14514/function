#include "header.h"
using namespace std;
int max(double a[], int n) {
    int max=a[0];
    for(int i=0; i<n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    return max;
}
int fail(double a[], int n, double limit) {
    int fail=0;
    for(int i=0; i<n; i++) {
        if (a[i] < limit) {
            fail++;
        }
    }
    return fail;
}

void T6a() {
    int n;
    double passinggrade;
    cout << "How many students are there?\n>";
    cin >> n;
    double* scores=new double[n];
    cout << "Enter the students scores\n>";
    for(int i=0; i<n; i++) {
        cin >> scores[i];
    }
    cout << "Enter the passing grade\n>";
    cin >> passinggrade;
    int high = max(scores,n);
    int failure = fail(scores,n,passinggrade);
    delete[] scores; //Just release them.
    cout << "Max score is " << high << endl;
    cout << "But " << failure  << " student";
    (failure  > 0 && failure  > 1)?cout << "s ": cout << ' ';
    cout << "failed." << endl;
}