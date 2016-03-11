#include <iostream>
using namespace std;

int main()
{
    unsigned long long num1 = 0, num2 = 1, cache;
    int f;

    cout << num1 << endl << num2 << endl;
    for(f = 1; f < 50; ++f){
        cache = num1 + num2;
        num1 = num2;
        num2 = cache;
        cout << cache << endl;
    }

    return 0;
}