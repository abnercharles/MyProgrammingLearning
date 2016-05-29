#include <iostream>
#include "string.h"
using namespace std;

void mystring(char*,const char*);

int main()
{
    char name[10];
    mystring(name, "abnc");
    cout << name << endl;
}

void mystring(char *s, const char *d)
{
    strcpy(s, d);
}