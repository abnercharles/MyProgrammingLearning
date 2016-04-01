#include <iostream>
#include <vector>
#include "std_lib_facilities.h"
using namespace std;

int main()
{
/*    int a = 3;
    int *b = &a;
    *b = 5;
    a = 6;
    cout << b << endl;
    cout << *b << endl;*/
    int a = 5;
    int array[] = {1,2,3};
    int *p, *q, **pq, *ptr;
    void *n;

    p = &a;
    q = &a;
    pq = &p;
    q++;
    n = array;
    ptr = nullptr;

    void memcpy(void *dest, const void *src, size_t len)

    cout << "p address = " << p << endl << "q address = " << q << endl; 
    cout << "array address = " << array << '\t' << endl;
    cout << "p = " << *p << '\t' << endl << "q = " << *q << '\t' << endl;
    cout << "pq address = " << pq << '\t' << endl;
    cout << *pq << ' ' << **pq << endl;
    // cout << *ptr << endl;
    cout << endl << n << endl;
}