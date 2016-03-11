#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
/*    int i;

    for( i = 0; ; i += 7){
        cout << i << endl;
        if (i > 100)
            break;
    }

    return 0;*/

/*    char i;
    for(i = 'a'; i <= 'z'; ++i)
        cout << i << endl;*/
    
/*    char string [256];

    gets (string);
    cout << string << endl;

    return 0;*/

/*    char sentence[80], prev = ' ';
    int i, num = 0;
    char tem[BUFSIZ][40] = {'\0'};

    gets(sentence, 80);

    for (i = 0; sentence[i] != '\0'; ++i){
        
    }*/

// Think again
// 
   /* int N, i, split;

    cin >> N;
    while(i = 1; N != 0; i *= 10){
        N /= i;
    }

    do{
        split = N / i;
        cout << split << ' ';
    }
    while(i; i < 10; i /= 10)*/

// Think Again

/*    int N, i, split;

    cin >> N;
    while(i = 1; N / 10 != 0; ++i)
    while(){
        split = N / (1ei)
    }*/
/*    int num1 = 2, num2 = 3;
    cout << num1 << endl << num2 << endl;
    cout << fixed <<pow(2,31) << endl;
*/

    int N, i, star, space;
    cin >> N;

    for(i = 1; i <= N; ++i){
        space = ((2 * N - 1) - (2 * i - 1))/2;
        star = (2*N - 1) - (2*space);
        // cout << ' '* space << '*' * star << endl;
        for(int j = 0; j < space; ++j)
            cout << ' ';
        for(int k = 0; k < star; ++k)
            cout << '*';
        cout << endl;
    }
}