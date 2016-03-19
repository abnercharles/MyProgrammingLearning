 #include <iostream>
using namespace std;

int num(int N);

int main()
{
    int N, i, split;
    cin >> N;

    i = num(N);
    for(; i>0; i /= 10){
        // cout << i << endl;
        split = N / i;
        N -= i * split;
        cout << split << ' ';
        // cout << i << endl;
    }
    return 0;
}

int num(int N)
{
    int j = 10, result = 1;
    while(result > 0){
        result = N / j;
        j *= 10;
    }
    j /= 100;

    return j;
}