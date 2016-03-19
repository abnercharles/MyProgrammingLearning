#include <iostream>
#include <cmath>
using namespace std;

float solveX(float, float);
float solveFx(float);

int main()
{
    float a = -1.0, b = 1.0, x, fx, precision;

    cout << "Please enter the precision: " << endl;
    cin >> precision;

    x = solveX(a, b);
    fx = solveFx(x);
    if(fabs(fx) < precision){
        cout << "the solved x = " << x << endl;
        cout << "by the way, fx = " << fx << endl;}
    else if(fx >0){
        while(fabs(fx) > precision){
            b = x;
            x = solveX(a, b);
            fx = solveFx(x);
        }
        cout << "the solved x = " << x << endl; 
        cout << "by the way, fx = " << fx << endl;
    }
    else{
        while(fabs(fx) > precision){
            a = x;
            x = solveX(a, b);
            fx = solveFx(x);
        }
        cout << "the solved x = " << x << endl; 
        cout << "by the way, fx = " << fx << endl;
        }

return 0;
}

float solveX(float a, float b)
{
    float fx1 = solveFx(a);
    float fx2 = solveFx(b);
    float x = ((a * fx2) - (b * fx1))/(fx2 - fx1);

    return x;
}

float solveFx(float x)
{
    float fx;
    fx = x*x*x + 2*x*x + 5*x -1;

    return fx;
}