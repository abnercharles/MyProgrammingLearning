#include <iostream>
using namespace std;

int main()
{
const int MAX = 50;
int score[MAX], max = 0, min = 100, sum = 0, num, average, i;
for (num = 0; num < MAX; ++num){
    cin >> score[num];
    if (score[num] == -1) break;
    sum += score[num];
    if (score[num] > max) max = score[num];
    if (score[num] < min) min = score[num];
}

average = sum / num;

cout << "\n Score List: \n";
cout << "NO.\tScore\tHighest\tLowest\tAverage\n";
for (i = 0; i < num; ++i){
    cout << i << '\t' << score[i] << '\t' << max << '\t'
         << min << '\t' << average << '\n';
}

return 0;
}