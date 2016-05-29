#include <iostream>
using namespace std;

class circle
{
protected:
    double radius;
public:
    circle(double r = 0): radius(r){}

    void modify(double rp) const
    {
        radius += rp;
    }

    double getr() const
    {
        return radius;
    }

    double area() const
    {
        return 3.14*radius*radius;
    }

    double circum() const
    {
        return 2*radius*3.14;
    }

};

class ball:public circle
{
public:
    ball (double r = 0) : circle(r){};
    double volume() const
    {
        return area()*radius;
    }

};

int main()
{
    ball myball(4);
    myball.modify(6);

    cout << myball.getr();

}