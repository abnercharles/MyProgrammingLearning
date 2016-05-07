#include <iostream>
#include <Limits.h>
using namespace std;

int fib(int n);
int main()
{
    int n = 7;
    int sum = fib(n);
    cout << sum << endl;
    return 0;
}

int fib(int n)
{
    int res;

    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else
        res = fib(n-1) + fib(n-2);
    
    return res;
}