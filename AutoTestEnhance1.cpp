#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int num1, num2, oprate, inputResult;

int main(void)
{
    srand(time(NULL)); //init random seed
    // Get num1,num2
    num1 = rand()*10 / (RAND_MAX+1);
    num2 = rand()*10 / (RAND_MAX+1);

    oprate = rand()*4 / (RAND_MAX+1);

    enum op{ plus, minus, multiply, mod };
    op operater = minus;

    switch (oprate)
    {
        case op plus: cout << num1 << '+' << num2 << '=' << "Please enter the anser: " << endl;
            cin >> inputResult; result = num1 + num2;
            if (inputResult == result) cout << "Right answer!" << endl;
                else cout << "Sorry, it's wrong~ and the right answer is: " << result;
            break; 
        case op minus: cout << num1 << '-' << num2 << '=' << "Please enter the anser: " << endl;
            cin >> inputResult; result = num1 - num2;
            if (inputResult == result) cout << "Right answer!" << endl;
                else cout << "Sorry, it's wrong~ and the right answer is: " << result;
            break;
        case op multiply: cout << num1 << '*' << num2 << '=' << "Please enter the anser: " << endl;
            cin >> inputResult; result = num1 * num2;
            if (inputResult == result) cout << "Right answer!" << endl;
                else cout << "Sorry, it's wrong~ and the right answer is: " << result;
            break;
        case op mod: cout << num1 << '%' << num2 << '=' << "Please enter the anser: " << endl;
            cin >> inputResult; result = num1 % num2;
            if (inputResult == result) cout << "Right answer!" << endl;
                else cout << "Sorry, it's wrong~ and the right answer is: " << result;
            break;
    }
    return 0;

}