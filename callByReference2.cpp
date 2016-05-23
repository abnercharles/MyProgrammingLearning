#include <iostream>
using namespace std;
void call(const int (&)[5]);
int main()
{
    int a[] = {1,22,4,34,5};
    call(a);
    for(int i = 0; i < sizeof(a)/4; ++i)
        cout << a[i];
}

void call(const int (&a)[5])
{
    
}