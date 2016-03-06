#include <iostream>
using namespace std;

 int i = 0;

int main()
{
    while(i < 5)
    {
        ++i;
        switch (i)
        {
            case 1: cout << "i = 1" << endl; break;
            case 2: cout << "i = 2" << endl; break;
            case 3: cout << "i = 3" << endl; break;

            default: cout << "i = unknow" << endl;
        }
    }

    return 0;
}

/*
int main()
{
    int day;

    cout << "请输入一个整型数： ";
    cin >> day;

    switch (day) 
    {
        case 0: cout << "Sunday" << endl; break;
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6: cout << "Saturday" << endl; break;
        default: cout << "Wrong Number!" << endl;
    }

    return 0;
}*/