#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int array[100] = {0};
    srand(time(NULL));

    for (int i = 0; i < 100; ++i){
        array[i] = rand();
    }
    for (int i = 0; i < 100; ++i){
        cout << array[i] << endl;
    }

    return 0;
}

int sort(*array)
{

}