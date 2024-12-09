#include "header.h"

using namespace std;

extern void sys(int);

extern void T1a();
extern void T2a();
extern void T3a();
extern void T4a();
extern void T5a();
extern void T6a();
extern void T7a();
void two()
{
    int choice;
part2:
    sys(1);
    cout << "Choose an option:" << endl;
    cout << "1. Program\n";
    cout << "2. Prime factors\n";
    cout << "3. Numbers sort\n";
    cout << "4. Date\n";
    cout << "5. Arrays compare\n";
    cout << "6. Scores\n";
    cout << "7. Factorial\n";
    cout << "0 for exit.\n";
    cout << endl << ">";
    cin >> choice;
    switch (choice)
    {
        case 0: goto end2;
        case 1:
            T1a(); break;
        case 2:
            T2a(); break;
        case 3:
            T3a(); break;
        case 4:
            T4a(); break;
        case 5:
            T5a(); break;
        case 6:
            T6a(); break;
        case 7:
            T7a(); break;
        default:
            cout << "Wrong choice.\n";
    }
    system("pause");
    goto part2;
    end2:
        sys(1);
    cout << "I'll back to main menu.\n";
}
