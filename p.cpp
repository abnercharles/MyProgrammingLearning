#include <iostream>
using namespace std;

int main()
{
    int a = 3;

    int * p = &a;

    *p = 2;

    *(p+2) = 1;


    cout << p << endl;
    cout << p+2 << endl;
    cout << *(p+2) << endl;
    cout << &p+2 << endl;

}