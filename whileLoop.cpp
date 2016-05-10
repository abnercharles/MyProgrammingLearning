#include <iostream>
using namespace std;

int wc(const char *s)
{
    int count = 0;

    
    while (*s != '\0'){
        while (*s == ' ')
            ++s;
        if (*s != '\0'){
            ++count;
            while (*s != ' ' && *s != '\0') ++s;
        }
    }
    return count;
}

int main()
{
    const char s[] = "   you are a piece of shit.";

    int out = wc(s);
    cout << out << endl;
}