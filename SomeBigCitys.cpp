#include <iostream>
#include <cstdlib>
using namespace std;

enum someBigCities{
    Guangzhou = 4,
    Shenzhen = 4,
    Hongkong = 4,
    Shanghai = 2,
    Beijing = 3,
    Chongqin = 5
};

someBigCities wh1 = Guangzhou;
someBigCities wh2 = Beijing;

int main(void)
{

    cout << "the value is: " << wh1 << wh2 << endl;

    return 0;
} 