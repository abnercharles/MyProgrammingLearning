#include <iostream>
using namespace std;

int main()
{
    int const MAX_SIZE = 10;
    int a[MAX_SIZE] [MAX_SIZE], b[MAX_SIZE][MAX_SIZE], c[MAX_SIZE][MAX_SIZE];
    int i, j, k, NumofRowA, NumofColA, NumofColB;

    cout << "Please enter the row and col of A and the col of B: ";
    cin >> NumofRowA >> NumofColA >> NumofColB;

    cout << "\n Please enter A: \n";
    for (i = 0; i < NumofRowA; ++i)
        for (j = 0; j < NumofColA; ++j){
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }

    cout << "\n Please enter B: \n";
    for (i = 0; i < NumofColB; ++i)
        for (j = 0; j < NumofColA; ++j){
            cout << "b[" << j << "][" << i << "] = ";
            cin >> b[j][i];
        }

    for (i = 0; i < NumofColA; ++i)
        for (j = 0; j < NumofColB; ++j){
            c[i][j] = 0;
            for (k = 0; k < NumofColA; ++k)
                c[i][j] += a[i][k] * b[k][j];
        }

    cout << "\n Out put C: ";
    for (i = 0; i < NumofRowA; ++i){
        cout << endl;
        for (j = 0; j < NumofColB; ++j)
            cout << c[i][j] << '\t';
    }

    return 0;
}