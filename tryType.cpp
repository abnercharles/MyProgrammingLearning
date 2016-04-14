#include <iostream>
#include <vector>
using namespace std;

/*class X {
    int m;
    int mf(int v){int temp = m; m = v; return temp;}
};*/

/*void func(int& ad,int *point)
{
    ++ad;
    cout << ad << point;
}

int main()
{
    int a = 5;

    func(a,&a);
}
*/

class Date {


public:
    Date(int y, int m, int d);
    
    void add_day(int d) {};
    int year() {return y;}
    int month() {return m;}
    int day() {return d;}

private:
    int y, m, d;
};

int main()
{
    Date::Date(int yy, int mm, int dd) 
/*        if(m > 12)
            cout << "Too many months!";
*/      :y(yy), m(mm), d(dd){}
    Date today(2015, 4, 2);
   // ++today.d;
   // today.month() = 5;

    cout << today.year() << endl << today.month() << endl;
}