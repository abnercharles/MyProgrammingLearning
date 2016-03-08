#include <iostream>
using namespace std;

enum weekdayT { Sunday = 12, Monday, Tuesday, Wednesday = 0, Thursday, Friday, Saturday };
void prnt(weekdayT day)
{
    if (day == 0) cout << "Weekend" << endl;
    else cout << "Weekday" << endl;
}

int main()
{
    prnt(Sunday);
    prnt(Monday);
    prnt(Tuesday);
    prnt(Wednesday);
    prnt(Thursday);
    prnt(Friday);
    prnt(Saturday);

     weekdayT x = Monday; // How to access a enum type
    cout << x << endl;

    return 0;
}
