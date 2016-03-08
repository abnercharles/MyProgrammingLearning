#define NUM 10
#include <iostream>
using namespace std;

int main()
{
    double sheep[NUM], max = 0;
    int i, maxNum;
    for(i = 0; i < NUM; i++)
    {
        cout << "Please enter the " << i << " weight: ";
        cin >> sheep[i];
    }
    for(i = 0; i < NUM; i++)
        if(sheep[i] > max)
        {
            max = sheep[i];
            maxNum = i;
        }
    cout << "Max " << maxNum << endl;
    cout << "Weight " << max << endl;

    return 0;
}