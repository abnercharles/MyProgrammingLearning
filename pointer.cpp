#include <iostream>
using namespace std;

void printChar(char *str)
{
    cout << "sizeof: " << (sizeof(*str)) << endl;
    cout << "sizeof: " << (sizeof(str)) << endl;
    
    cout << "str: " << (str) << endl;
    cout << "*str: " << (*str) << endl;
    

    for (unsigned int i = 0; i < (sizeof(*str)); ++i)
        cout << str[i] << endl;
}
int main()
{
   /* int *p;
    p = new int;
    *p = 40;
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;

    int a = 20;
    int *b = &a;
    cout << "a: " << a << endl;
    cout << "*b: " << *b << endl;
    cout << "b: " << b << endl;*/

/*    int *p;
    p = new int[10];

    p[2] = 20;

    delete [] p;

    p[3] = 30;
    for (int i = 0; i < 10; ++i)
        cout << p[i] << endl;
*/



    char *str;
    str = "abcdef";
    for (int i = 0; i < 10; ++i)
    cout << str[i] << endl;

    char str2[] = "fff";
    char str3[] = {'f','a','b'};
    char str4[10] = {};
    char str5[10] = {'a'};

    printChar(str2);
    printChar(str3);
    printChar(str4);
    printChar(str5);

    cout << (sizeof(str5)) << endl;
}