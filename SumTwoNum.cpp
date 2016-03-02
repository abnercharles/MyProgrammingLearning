#include <iostream>
using namespace std;

int main()
{
    int num1, num2, total;

    cout << "Please enter the first number: ";
    cin >> num1;
    cout << "Please enter the second number: ";
    cin >> num2;
    total = num1 + num2;
    cout << num1 << '+' << num2 << '=' << total << endl;

    return 0;
}

