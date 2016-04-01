#include <iostream>
using namespace std;

int reverse(int);

int main()
{
    cout << reverse(12345); 
}

int reverse(int num)
{
    reverse(num%10);
}