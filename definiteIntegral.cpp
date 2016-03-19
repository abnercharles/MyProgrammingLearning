#include <iostream>
using namespace std;

float solveFx(float);
float area(float, float, float);

int main()
{
    float precision, totalArea = 0, a, b;

    cout << "Please enter the left and the right along with the precision: " << endl;
    cin >> a >> b >> precision;

    while(a < b){
        totalArea += area(a, b, precision);
        a += precision;
    }

    cout << "the area is " << totalArea << endl;

    return 0;
}

float solveFx(float x)
{
    float fx = x*x + 5*x + 1;

    return fx;
}

float area(float a,float b,float precision)
{   
    float ax = a + precision/2;
    float square = solveFx(ax) * precision;

    return square;
}