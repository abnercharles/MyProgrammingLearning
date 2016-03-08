#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double small;
double pi = 3.1415926;


main()
{

    enum op{ plus1, minus1, multiply1=100, mod1=200 };
    op plusAbner;
    plusAbner = plus1;

    op myop;
    myop = op(3);
    // srand(time(NULL));

/*    cout << time(NULL) << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << RAND_MAX << endl;
    cout << 3-6 << endl;

    small = 1e-6;
    cout << small << endl;
*/
   /* int s = 0;
    for (int i = 1; i <= 100; ++1) s += 1;
    cout << s << endl;*/
    


    int oprate;
    oprate =1 + multiply1;
    cout << plus1 << endl << oprate << endl;
    cout << myop << endl;

    return 0;

}