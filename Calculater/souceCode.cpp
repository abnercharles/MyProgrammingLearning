#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main()
{
    cout << "Expression = ";
    int lval, rval;
    char op;
    cin >> lval;
    if (!cin) error("fuk you!");
    while (cin >> op){
        if (op != ';') cin >> rval;
        if (!cin) error("fuk you again");
        switch(op){
            case '+':
                lval += rval;
                break;
            case '-':
                lval -= rval;
                break;
            case '*':
                lval *= rval;
                break;
            case '/':
                lval /= rval;
                break;
            default:
                cout << "Result: " << lval << endl;
                keep_window_open();
                return 0;
        }

    }
    error ("bad expression");
}