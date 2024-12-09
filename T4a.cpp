#include "header.h"
using namespace std;
class Date {
public:
    Date(int date);
    bool leap(int year);
    int dateTodays();
private:
    int date;
    int month;
    int year;
};
Date::Date(int a) {
    year = a / 10000;
    month = (a % 10000) / 100;
    date = a % 100;
}

bool Date::leap(int n) {
    return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
}
int Date::dateTodays() {
    int result = 0;
    for (int i = 1; i < month; i++) {
        switch (i) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                result += 31; break;
            case 4:
            case 6:
            case 9:
            case 11:
                result += 30; break;
            case 2:
                if (leap(year)) {
                    result += 29; break;
                }
            result += 28; break;
        }
    }
    return result + date;
}
void T4a() {
    int date;
    cout << "Input a date(yyyymmdd,like20120102:\n>";
    cin >> date;
    Date d(date);
    cout << "There has been " << d.dateTodays() << "days passed of " << (date/10000) << endl;
}