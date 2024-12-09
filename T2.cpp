#include "header.h"
using namespace std;
int plusx(int x, int y) {//���ڱ�����(VS 2022��ԭ�򣬽������������޸ģ����򱨴�plus����ȷ)
	return (x + y);
}
void T2() {
	/*int a = 4, b = 5, c;
	c = plusx(a, b);
	printf("a+b=%d\n", c);*/
	int a = 4, b = 5;
	printf("a+b=%d\n", plusx(a, b));
}