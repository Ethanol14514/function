#include "header.h"
using namespace std;
long long factorial(int n) {
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}
void T7a() {
    int n;
    long long sum = 0;
    cout << "Input a number:\n>";
    cin >> n;
    if (n > 4) {
      cout << "The result might not be precise.\n"; //n=5ʱ��ֵΪ1.55e25(1.55*10^25)�������ɱ�ʾ��long long��2^63
    }
    for(int i=1; i<=n; i++) {
        sum += factorial(pow(i,2));
    }
    cout << "The sum is: " << sum << endl;
}