#include <iostream>
using namespace std;

int main()
{
    //char a[] = "123";
    //char *p = a;
    //cout << *p++ << *p++ << *p++ <<endl;

    int a = 0;
    cout << a++ << a++ << a++;

    cout << endl;
    
    int b = 0;
    cout << b++ << b++ << ++b;

    int c = 0;
    cout << endl;
    cout << ++c;
}