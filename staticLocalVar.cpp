#include <iostream>
using namespace std;

int f(int a);

int main()
{
    int a = 2;

    for (int i = 0; i < 3; ++i)
    {
        cout << "a+b+c = " << f(a) << endl;
    }

    return 0;
}

int f(int a)
{
    int b = 0;
    static int c = 3;

    ++b; ++c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return(a+b+c);
    
}