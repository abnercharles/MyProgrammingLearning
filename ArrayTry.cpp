#include <iostream>
using namespace std;

int main()
{
/*    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    cout <<"arr: " << arr << endl;
    cout <<"*arr: " << *arr << endl;
    cout <<"arr[0]: " << arr[0] << endl;
    cout <<"**arr: " << **arr << endl;
    cout <<"*arr[0]: " << *arr[0] << endl;
    cout <<"&*arr[0]: " << &*arr[0] << endl;


    cout <<"**(arr+1): " << **(arr+1) << endl;
    cout <<"*(*arr)+1: " << *(*arr)+1 << endl;
    cout <<"(**arr)+1: " << (**arr)+1 << endl;

    cout <<"arr+1: " << arr+1 << endl;
    cout <<"*arr+1: " << *arr+1 << endl;
    cout <<"**arr+1: " << **arr+1 << endl;
    cout <<"*(arr+1)+1: " << *(arr+1)+1 << endl;
    cout <<"*(*(arr+1)+1): " << *(*(arr+1)+1) << endl;*/

    int **a;
    a = new int * [3];

    int *p = new int(10);

    delete a;
    delete p;

}