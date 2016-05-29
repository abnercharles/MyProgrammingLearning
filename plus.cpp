#include <iostream>
using namespace std;

class Point_2d 
{
private:
    int x, y;
public: 
    Point_2d(int a, int b):x(a), y(b) {}
    int getx() const {return x;}
    int gety() const {return y;}
};

Point_2d aPoint(2,5);

