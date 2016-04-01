#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main()
{
    cout << "Expression = ";
    int lval, rval, res;
    char op;
    cin >> lval >> op >> rval;

    if (op == '+')
        res = lval + rval;
    else if (op == '-')
        res = lval - rval;
    else
        cout << "wrong input" << endl;
    cout << "Result = " << res << endl;
    keep_window_open();
    return 0;
}