#include <iostream>
using namespace std;

get_token()
expression()
term()
primary()

int main()
{

}

double expression()
{
    double left = term();
    Token t = get_token();
    switch (t.kind){
        case '+':
        double left = expression();
        return left + term();
        break;
        case '-':
        double left = expression();
        return left - term();

        default:
        return left;
    }
}