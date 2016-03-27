#include <iostream>
using namespace std;
#define MAX 15

int main()
    {
    int magic[MAX][MAX] = {0};
    int count, scale, row, col;

    cout << "Please enter the scale: " << endl;
    cin >> scale;

    row = 0; col = (scale - 1) / 2;
    magic[row][col] = 1;
    for (count = 2; count <= scale * scale; ++count){
        if (magic[(row -1 + scale) % scale][(col + 1) % scale] == 0){
            row = (row - 1 + scale) % scale;
            col = (col + 1) % scale;
        }
        else row = (row + 1) % scale;
        magic[row][col] = count;
    }
    for (row = 0; row < scale; ++row){
        for (col = 0; col < scale; ++col){
            cout << magic[row][col] << '\t';
        }
        cout << endl;
    }
    return 0;
}
