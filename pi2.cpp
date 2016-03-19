#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float solveFx(float);
float area(float, float, double);

int main()
{
    float b;
    double a, totalArea = 0, pi, precision;

    cout << "Please enter the left and the right along with the precision: " << endl;
    cin >> a >> b >> precision;

    while(a < b){
        totalArea += area(a, b, precision);
        a += precision;
        if(b-a < precision)
            break;
    }
    pi = 4 * totalArea;

    cout << "the area is " << totalArea << endl;
    cout << "Pi = " << setprecision(sizeof(precision)) << pi << endl;

    return 0;
}

float solveFx(float x)
{
    double fx = sqrt(1.0 - x*x);

    return fx;
}

float area(float a,float b,double precision)
{   
    float ax = a + precision/2;
    double square = solveFx(ax) * precision;

    return square;
}