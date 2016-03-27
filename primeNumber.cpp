#include <iostream>
using namespace std;

int filter(int a[], int);

int main()
{   
    const int number = 100000;
    int array[number] = {0};

    for (int i = 0; i < number; ++i){
        array[i] = 2 + i;
    }

    filter(array, number);

    for (int i = 0; i < number; ++i){
        if (array[i] != 0)
            cout << array[i] << ' ';
    }

    return 0;
}

int filter(int a[], int number)
{
    for (int i = 0; i < number; ++i){
        if (a[i] != 0){
            for (int j = i + 1; j < number; ++j){
                if (a[j] % a[i] == 0)
                    a[j] = 0;
            }
        }
    }

    return 0;
}