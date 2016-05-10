#include <iostream>
using namespace std;

void swapByPoint(int * a, int * b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void swapByRef(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int a = 3, b = 4;

    cout << "a: " << a << ", b: " << b << endl;

    swapByPoint(&a, &b);

    cout << "a: " << a << ", b: " << b << endl;

    swapByRef(a,b);

    cout << "a: " << a << ", b: " << b << endl;
}