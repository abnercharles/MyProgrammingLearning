#include <iostream>
using namespace std;

const char DIGIT[17] = {"0123456789abcdef"};
void printInt(int,int);

int main()
{
    int num, base;

    cout << "Please enter a number: " << endl;
    cin >> num;
    cout << "Please enter the form: " << endl;
    cin >> base;
    printInt(num, base);
    cout << endl;

    return 0;
}

void printInt (int num, int base)
{
    if (num < base)
        cout << DIGIT[num] << endl;
    else{
        printInt(num/base, base);
        cout << DIGIT[num%base] << endl;
    }
}