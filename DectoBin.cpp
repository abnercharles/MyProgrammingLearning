#include <iostream>
using namespace std;

int d = 0;

int main(int d)
{
    cout << "Please enter a integer: ";
    cin >> d;
    if(d/2)
        DtoB(d/2);
        cout << d%2;
    return 0;
}
