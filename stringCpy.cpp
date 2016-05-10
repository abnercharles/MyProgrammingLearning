#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char arr[] = {'1','2','3','a','b','c','\0'};
    //cout << sizeof(arr)<<endl;
    char string[]="C++ programming language";
    //cout << sizeof(string)<<endl;

/*    for(int i = 0; i < sizeof(string); ++i)
        cout << string[i]<<endl;
    cout << endl;
    for(int i = 0; i < sizeof(arr); ++i)
        cout << arr[i] << endl;*/

    //char copy[1000];
   // strcpy(copy,arr);
    //strlen(arr);
    cout << arr[2]<<endl;
   // for(unsigned int i = 0; i < sizeof(copy); ++i)
    //cout << copy[i];
}