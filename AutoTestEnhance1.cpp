#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int num1, num2, oprate, result, inputResult;

int main()
{
    srand(time(NULL)); //init random seed
    // Get num1,num2
    num1 = rand()*10 / (RAND_MAX+1);
    num2 = rand()*10 / (RAND_MAX+1);

    enum op{ plus1, minus1, multiply1, mod1 };
    op oprate;
    oprate = op(rand()*4 / (RAND_MAX+1));

    switch (oprate)
    {

        case plus1: cout << num1 << '+' << num2 << '=' << "Please enter the anser: " << endl;
            cin >> inputResult; result = num1 + num2;
            if (inputResult == result) cout << "Right answer!" << endl;
                else cout << "Sorry, it's wrong~ and the right answer is: " << result;
            break; 
        case minus1: cout << num1 << '-' << num2 << '=' << "Please enter the anser: " << endl;
            cin >> inputResult; result = num1 - num2;
            if (inputResult == result) cout << "Right answer!" << endl;
                else cout << "Sorry, it's wrong~ and the right answer is: " << result;
            break;
        case multiply1: cout << num1 << '*' << num2 << '=' << "Please enter the anser: " << endl;
            cin >> inputResult; result = num1 * num2;
            if (inputResult == result) cout << "Right answer!" << endl;
                else cout << "Sorry, it's wrong~ and the right answer is: " << result;
            break;
        case mod1: cout << num1 << '%' << num2 << '=' << "Please enter the anser: " << endl;
            cin >> inputResult; result = num1 % num2;
            if (inputResult == result) cout << "Right answer!" << endl;
                else cout << "Sorry, it's wrong~ and the right answer is: " << result;
            break;
    }
    return 0;

}