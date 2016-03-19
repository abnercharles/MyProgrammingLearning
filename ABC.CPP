#include <iostream>
#define


using namespace std;


int main()
{   
    enum abc {A = 1, B, C};

    abc x;
    x = A;

    int A, B, C;
    for(A = 1; A < 4; ++A)
        for(B = 1; B < 4; ++B)
            if(A == B) continue;
            else {C = 6 - A - B;
            cout << A << ' ' << B << ' ' << C << endl;}

}