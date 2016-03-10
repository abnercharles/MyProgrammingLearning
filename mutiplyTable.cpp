#include <iostream>
using namespace std;

/*int main()
{
    int i,j;

    for (i = 1; i < 10; ++i){
        for (j = 1; j < 10; ++j){
            if (j > i)
                break;
            cout << i << '*' << j << '=' << i * j << '\t';}
        cout << endl;
    }

    return 0;
}
*/
// Left side table

// Right side table

int main()
{
    int i,j;

    for (i = 1; i < 10; ++i){
        for (j = 9; j > 0; --j){
            if (j > i){
               cout << "      " << '\t';
            }
            else
                cout << i << '*' << j << '=' << i * j << '\t';
        }
        cout << endl;
    }

    return 0;
}