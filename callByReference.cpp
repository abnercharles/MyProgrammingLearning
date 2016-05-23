#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    /*int a = 5, b = 6;
    int &j = a;
    int * p = &a;

    p = &b;
    j = b;


    cout << "j: " << j <<endl;
    cout << "&j: " << &j <<endl;
    cout << "p: " << p <<endl;
    cout << "*p: " << *p <<endl;*/

    int a[] = {3,2};
 //   int &b = *a;
    int (&b)[2] = a;
    
    cout << typeid(a).name() << endl;
 //   cout << typeid(b).name() << endl;
    cout << typeid(b).name() << endl;
    cout << b[1]<< endl;

}

