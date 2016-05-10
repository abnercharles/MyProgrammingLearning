#include <iostream>
using namespace std;

/*void printChar(char str[])
{
    cout << "sizeof: " << (sizeof(str)) << endl;

    for (unsigned int i = 0; i < (sizeof(str)); ++i)
        cout << str[i] << endl;
}*/

void word(const char *s)
{
    cout << *s <<endl;
    ++s;
    cout << s <<endl;
    cout << &s <<endl;
}

int main()
{
    char s[] = "You are a piece of shit.";
   // cout << *s <<endl;
   // ++&s;
   // cout << *s <<endl;

    word(s);
/*    printChar(arr);


    cout << "sizeofinMain: " << (sizeof(arr)) << endl;

    for (unsigned int i = 0; i < (sizeof(arr)); ++i)
        cout << arr[i] << endl;*/
}

