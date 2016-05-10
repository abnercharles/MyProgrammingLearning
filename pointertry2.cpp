#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 6;

    int * p1 = &a;
    int * p2 = &b;

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;

    *p1 = *p2;
    cout << "p1: " << p1 << endl;

    cout << "a: " << a << endl;
}