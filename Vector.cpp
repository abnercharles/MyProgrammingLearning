#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /* vector<double> temps;
    for (double temp; cin >> temp; )
        temps.push_back(temp);*/

    /* vector<string> words;
    for (string s; cin >> s && s != "quit";)
        words.push_back(s);

    ostream& operator << (ostream& os, const triangle &)
    {

    }

    sort(words);
    cout << words << endl; */


    int gcd(int x, int y) //欧几里得算最大公约数
    {
        int r = x % y;
        while (r!=0)
        {
            x = y;
            y = r;
            r = x % y;
        }
        return y;
    }

    int gcd(int)
}
