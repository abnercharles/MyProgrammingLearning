#include <iostream>

using namespace std;

int main()
{
    int n, i = 1;
    float result = 0, plus = 1;
    cout << "Please enter the n: " << endl;
    cin >> n;

    for (; i <= n;) {
        if (i % 2 == 1) {
            result += (4 / plus);
            plus += 2;
            ++i;
        }
        else {
            result -= (4 / plus);
            plus += 2;
            ++i;
        }
    }
    cout << result << endl;
    return 0;
}