#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double ex, p;
    int n, x;

    cout << "Please enter the value of x: " << endl;
    cin >> x; 

    ex = 1;
    p = 1;
    n = 1;
    while(p >= 0.000001){
        p = p*x/n;
        ++n;
        ex += p;
    }

cout << ex << endl;

return 0;
}