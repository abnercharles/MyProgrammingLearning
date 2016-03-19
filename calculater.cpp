#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int num1();
int num2();

int main()
{
    int num, num1, num2;

    srand(time(NULL));

    num = rand() * 100 / (RAND_MAX + 1);
    num1 = rand() * 100 / (RAND_MAX + 1);
    num2 = rand() * 100 / (RAND_MAX + 1);
    cout << num << endl << num1 << endl << num2 << endl;
} 