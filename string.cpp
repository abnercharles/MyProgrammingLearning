#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    double num[20] = {3.231, 0, 1};
    for(int i = 0; i < 20; ++i){
        cout << num[i] << endl;
        size += sizeof(num[i]);
    }
    cout << size << endl;

    return 0;

}