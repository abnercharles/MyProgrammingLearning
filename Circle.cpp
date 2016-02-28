#define PI 3.14159 //定义符号常量
#include <iostream>
using namespace std;

int main()
{
    double radius, area, circum;

    cout << "Please enter the radius of a circle: ";
    cin >> radius;

    area = PI * radius * radius;
    circum = 2 * PI * radius;

    cout << endl;
    cout << "The area of that circle is: " << area << endl;
    cout << "The circum of that circle is: " << circum << endl;

    return 0;
}
