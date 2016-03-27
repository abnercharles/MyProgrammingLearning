#include <iostream>
using namespace std;

int main()
{   
    int const a = 20, b = 21;
    int n, row, col, i, j, mid;
    int triangle[a][b] = {0};
    cout << "Please enter the number of rows: \n";
    cin >> n;

    mid = b / 2;
    for (row = 0; row < a; ++row)
        for (col = 0; col < b; ++col){
            triangle[0][col] = 0;
        }
    triangle[0][mid] = 1;
    for (row = 1; row < n; ++row){
        for (col = 1; col < b; ++col){
            triangle [row][col] = triangle[row-1][col-1] + triangle[row-1][col+1];
 
        }
        
    }
    for (i = 0; i < a; ++i){
        for(j = 0; j < b; ++j){
            if (triangle[i][j] == 0)
                cout << ' ';
            else cout << triangle[i][j];
        }
        cout << endl;
    }
    return 0;
}