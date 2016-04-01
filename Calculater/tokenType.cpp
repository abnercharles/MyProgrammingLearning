#include <iostream>
#include <vector>
#include "std_lib_facilities.h"
using namespace std;

Token get_token();
vector<Token> tok;

class Token{
public:
    char kind;
    double value;
    Token(char ch)
        ：kind(ch), value(0){}
    Token(char ch, double val)
        ：kind(ch), value(val){}

};

Token t;
