#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415926, DICK = 2.3;



int main()
{
    int x = 5, w = 5, y = 0, z = 0;
    float round = 10;
    y = ++x;
    z = w++;
    cout << PI << endl << DICK << endl;
    cout << round/3 << endl;
    cout << sqrt(DICK) << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}
