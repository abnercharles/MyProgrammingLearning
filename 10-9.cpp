#include <iostream>
#include <cstring>
using namespace std;

class sample
{private:
    char *string;
public:
    sample(const char *s)
    {
        string = new char[strlen(s) + 1];
        strcpy(string, s);
    }
    ~sample(){delete string;}
};

sample f(const echar *arg)
{
    sample tmp(arg);
    return tmp;
}

int main()
{
    sample local = f("abcd");

    return 0;
}