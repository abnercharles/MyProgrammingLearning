#include <iostream>
using namespace std;

extern int x;
void f();

int main()
{
     f();
     cout << x << endl;

    return 0;
}

