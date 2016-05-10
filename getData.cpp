#include <iostream>
using namespace std;
void getDate(int &, int &, int &);

int main()
{   int dd, mm, yy;
    char date [8];
    cin >> date;
    dd = (date[0] - '0')*10 + (date[1] - '0');
    mm = (date[3] - '0')*10 + (date[4] - '0');
    yy = (date[6] - '0')*10 + (date[7] - '0');

    getDate(dd, mm, yy);
}

void getDate(int &dd, int &mm, int &yy)
{
    cout << dd << ' ' << mm << ' ' << yy;
}