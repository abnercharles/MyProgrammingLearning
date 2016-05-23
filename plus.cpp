#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    //i = ++i;
    cout << ++i << ++i << ++i << endl;

    int j = 0;
    cout << j++ << j++ << j++ << endl;

    int k = 0;
    cout << k++ << k++ << ++k << endl;
    

    return 0;
}