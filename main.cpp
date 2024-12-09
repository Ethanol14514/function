#include "header.h"
extern void sys(int);
extern void one();
extern void two();
using namespace std;
int main() {
    int a;
start:
    sys(1);
    cout << "Which section will you use?" << endl;
    cout << "1. Part I" << endl;
    cout << "2. Part II" << endl;
    cout << "0 for exit." << endl;
    cout << ">" ;
    cin >> a;
    switch (a) {
        case 0:
            goto end;
        case 1:
            one();break;
        case 2:
            two();break;
        default:
            cout << "Wrong choice." << endl;
    }
    goto start;
end:
    sys(1);
    cout <<"Bye!" << endl;
    system("pause");
    return 0;
}