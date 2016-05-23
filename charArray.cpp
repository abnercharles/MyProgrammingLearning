#include <iostream>
using namespace std;

int main()
{
    char arr[] = "you sucks!";

    cout << "arr: " << arr << endl;
    cout << "*arr: " << *arr << endl;
    cout << "arr[0]: " << arr[0] << endl;
    cout << "*arr + 1: " << *arr + 1 << endl;
    cout << "*(arr + 1): " << *(arr+1) << endl;
    cout << "&arr: " << &arr << endl;
    cout << "&arr + 1: " << &arr + 1 << endl;

    char *p = arr;
    char *q = &arr[11];
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
    cout << "p[0]: " << p[0] << endl;
    cout << endl;
    cout << "q: " << q << endl;
    cout << "*q: " << *q << endl;
    cout << "q[0]: " << q[0] << endl;   


    /*
    invalid type argument of unary '*' (have 'char')
    
    cout << "*arr[0]: " << *arr[0] << endl; 
     */
}