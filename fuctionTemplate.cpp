#include <iostream>
using namespace std;

template <typename T, typename P>
P maxs(T a, P b)
{
    return a>b ? a : b;
}

int main()
{
    cout << maxs(2,3.7) << endl;
    return 0;
}