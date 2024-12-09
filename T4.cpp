#include "header.h"
using namespace std;
void shape(int x) {
	int halfwidth = (2 * x - 1) / 2 + 1;
	for (int i = 1; i <= x; i++) {
		for (int j = i; j < halfwidth; j++)
		{
			cout << ' ';
		}
		for (int j = 0; j < (2 * i - 1); j++)
		{
			cout << '*';
		}
		printf("\n");
	}
}
void T4() {
	int n;
	cin >> n;
	shape(n);
}