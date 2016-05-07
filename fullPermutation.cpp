#include <iostream>
#include <string.h>
using namespace std;

void ListPermutation(char str[]);
void PermuteWithFixedPrefix(char str[ ], unsigned int k);
void swap(char str[ ], int k, int i);

int main()
{
    char myString[] = {"ABC"} ;
    ListPermutation(myString);
}
void ListPermutation(char str[])
{
    PermuteWithFixedPrefix(str, 0);
}

void PermuteWithFixedPrefix(char str[ ], unsigned int k)
{
    unsigned int i;

    if (k == strlen(str))
        cout << endl << str << endl << endl;
    else
        for (i = k; i < strlen(str); ++i){
            cout << str << endl;
            cout << "i = " << i << " k = " << k << endl;
            swap(str, k, i);
            PermuteWithFixedPrefix(str, k+1);
            swap(str, k, i);
        }

}
void swap(char str[ ], int k, int i)
{
    int temp;

    temp = str[k];
    str[k] = str[i];
    str[i] = temp;
}