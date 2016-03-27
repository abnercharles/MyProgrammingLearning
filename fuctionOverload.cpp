#include <iostream>
using namespace std;

void print (int i);
void print (char str);

int main()
{

    print(12);
    print('s');

    return 0;

}

void print (int i)
{
    cout << "print a integer: " << i << endl;

}

void print (char str)
{
    cout << "print a string: " << str << endl;

}
