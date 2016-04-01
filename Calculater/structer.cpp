#include <iostream>
#include <vector>
#include "std_lib_facilities.h"
using namespace std;

int main()
{
    struct sT
    {
        int n;
        char name[10];
        struct insT
        {
            int ins;
        };
    };

    sT a = {5};
    cout << a.n;
}