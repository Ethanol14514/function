#include "header.h"
using namespace std;
extern int max(int, int, int);
void T1() {
	int a, b, c;
	cout << "Type 3 numbers:\n>";
	cin >> a >> b >> c;
	cout << "The maximum number is: " << max(a, b, c) << endl;
}