#include <iostream>
#include <cstdlib>
using namespace std;



int main(void)
{
    enum someBigCities{
    Guangzhou = 4,
    Shenzhen = 4,
    Hongkong = 4,
    Shanghai = 2,
    Beijing = 3,
    Chongqin = 5
    };

    someBigCities wh;
    wh = Guangzhou;

    someBigCities wh1 = Guangzhou;
    someBigCities wh2 = Beijing;

    cout << "the value is: " << wh1 << wh2 << endl;
    cout << wh << endl;

    return 0;
} 