#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double small;

main()
{
    // srand(time(NULL));

/*    cout << time(NULL) << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << RAND_MAX << endl;
    cout << 3-6 << endl;

    small = 1e-6;
    cout << small << endl;
*/
    int s = 0;
    for (int i = 1; i <= 100; ++1) s += 1;
    cout << s << endl;
}