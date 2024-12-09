/*注意！切勿拆分独立运行各个cpp文件！
* 切勿将单个源文件移出目录以避免头文件缺失
*/

#include "header.h"

using namespace std;

extern void sys(int);

extern void T1();
extern void T2();
extern void T3();
extern void T4();
extern void T5();

void one()
{
	int choice;
part1:
	sys(1);
	cout << "Choose an option:" << endl;
	cout << "1. max number\n";
	cout << "2. correct\n";
	cout << "3. triangle\n";
	cout << "4. triangle of `*`\n";
	cout << "5. couple number pairs.\n";
	cout << "0 for exit.\n";
	cout << endl << ">";
	cin >> choice;
	switch (choice)
	{
		case 0: goto end1;
		case 1:
			T1(); break;
		case 2:
			T2(); break;
		case 3:
			T3(); break;
		case 4:
			T4(); break;
		case 5:
			T5(); break;
		default:
			cout << "Wrong choice.\n";
	}
	system("pause");
	goto part1;
end1:
	sys(1);
	cout << "I'll back to main menu.\n";
}
