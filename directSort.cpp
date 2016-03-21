#include <iostream>
using namespace std;

int main()
{
    int lh, rh, tmp, k;
    int a[] = {2, 5, 1, 9, 10, 0, 4, 8, 7, 6};
    for (lh = 0; lh < 10; ++lh){
        rh = lh;
        for (k = lh + 1; k < 10; ++k){
            if(a[rh] > a[k]) 
                rh = k;
            }
            tmp = a[rh];
            a[rh] = a[lh];
            a[lh] = tmp;
    }

    for(int i = 0;i <10 ;++i)
        cout << a[i] << ' ';
    cout << endl;
}