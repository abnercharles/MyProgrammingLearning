#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 100;
    
struct personT
{
    char name[10];
    char sex;
    char addr[30];
    int phonenum;
};

int main()
{   
    personT p[MAX];
    int i, num = 0;

    cout << "Name Sex Address PhoneNumber (@ to break) : \n";
    while (num < MAX){
        cin >> p[num].name;
        if (p[num].name[0] == '@')
    }

}




