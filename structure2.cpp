#include <iostream>
#include <math.h>
using namespace std;
struct pointT;
pointT setPoint(double,double);
double getX(const pointT &);
double getY(const pointT &);
void showPoint(const pointT &);
double distancePoint(const pointT &, const pointT &);
double powerNumber(double);

struct pointT
{
    double x, y;
};

int main()
{
    pointT p3, p4;
    p3 = setPoint(1,1);
    p4 = setPoint(2,2);

    cout << getX(p3) << " " << getY(p4) << endl;
    showPoint(p3);
    cout << " -> " ;
    showPoint(p4);
    cout << " = " << distancePoint(p3,p4) << endl;

}

pointT setPoint(double x, double y)
{
    pointT p;

    p.x = x;
    p.y = y;

    return (p);
}

double getX(const pointT &p)
{
    return(p.x);
}

double getY(const pointT &p)
{
    return(p.y);
}

void showPoint(const pointT &p)
{
    cout << '(' << p.x << ',' << p.y << ')';
}

double distancePoint(const pointT &p1, const pointT &p2)
{
    return (sqrt(powerNumber(p1.x-p2.x) + powerNumber(p1.y - p2.y)));
}

double powerNumber(double a)
{
    return(a*a);
}