#include <iostream>
using namespace std;

float apple = 2.5, pear = 1.8, banana = 2, orange = 1.6;
float weightA, weightP, weightB, weightO;
float totalMoney;

int main()
{
    cout << "Please enter the weight of these fruit in order: Apple, Pear, Banana, Orange " << endl;
    cin >> weightA >> weightP >> weightB >> weightO;

    totalMoney = apple * weightA + pear * weightP + banana * weightB + orange * weightO;
    cout << "You need to pay: " << totalMoney << endl;
}
