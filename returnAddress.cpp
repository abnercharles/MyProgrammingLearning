#include <iostream>
#include <string.h>
using namespace std;
char * getString();

int main()
{
    char * p;
    p = getString();
    cout << p << endl;
}

char * getString()
{   
    char * string;
//    string = new char[10];

    cin >> string;

    return string;
}

