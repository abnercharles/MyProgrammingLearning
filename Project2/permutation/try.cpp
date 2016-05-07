#include <iostream>
using namespace std;

void PermuteFunc(char str[],int i);
void swap(char str[ ], int i);

int main()
{
    char mystr[] = "abc";
    PermuteFunc(mystr,0);
}

void PermuteFunc(char str[],int i)
{
    if (i == 2)
        cout << str << endl;
    else
        PermuteFunc(str,i+1);
        cout << i << endl;
        swap(str, i);
        cout << str << endl;
}

void swap(char str[ ], int i)
{
    int temp;

    temp = str[i];
    str[i] = str[i+1];
    str[i+1] = temp;
}
