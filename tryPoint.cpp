#include <iostream>
using namespace std;

int main()
{  /* 
    int arr[] = {1,2,3,14,5};
    int b = 10;
    int a = 5;*/
   // void *p = &a;
   // p = &b;
//    int arr[10] = {4,3,1,2,4};
    //int[] *p = arr;
/*    int *q = &arr[0];
    int *p = &arr[3];
    int *q1;
    int *p1; 
    q1 = &arr[0];
    p1 = &arr[3];3*/
    int num = 3;

    int *n;
    n = new int[2*num];
    *(n + 1) = 2;
    cout << n[1] << endl << v, n[0] << endl;
    delete [] n;

   /* int arr[] = {2,5,3};
    int *p;
    p = arr;
    //p = 4;
    for(int i = 0; i < 3; ++i)
        cout << *(p + i);
    cout << endl;*/

  //  cout << p-q <<  endl << *p1-*q1 <<endl;
  //  cout << *(arr+3) << endl;


}