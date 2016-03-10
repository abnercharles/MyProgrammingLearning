#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    while(true){
        ++a;
        if(a % 2 == 1 && a % 3 == 2 && a % 5 == 4 && a % 6 == 5 && a % 7 == 0) break;
    }

    cout << a << endl;
    return 0;
}