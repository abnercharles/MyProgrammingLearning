#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int num1, num2, op, result, inputResult;

main()
{
    srand(time(NULL)); //init random seed
    // Get num1,num2
    num1 = rand()*10 / (RAND_MAX+1);
    num2 = rand()*10 / (RAND_MAX+1);

    op = rand()*4 / (RAND_MAX+1);

    switch (op)
    {
        case 0: cout << num1 << '+' << num2 << '=' << "Please enter the anser: " << endl;
            cin >> inputResult; result = num1 + num2;
            if (inputResult == result) cout << "Right answer!" << endl;
                else cout << "Sorry, it's wrong~ and the right answer is: " << result;
            break; 
        case 1: cout << num1 << '-' << num2 << '=' << "Please enter the anser: " << endl;
            cin >> inputResult; result = num1 - num2;
            if (inputResult == result) cout << "Right answer!" << endl;
                else cout << "Sorry, it's wrong~ and the right answer is: " << result;
            break;
        case 2: cout << num1 << '*' << num2 << '=' << "Please enter the anser: " << endl;
            cin >> inputResult; result = num1 * num2;
            if (inputResult == result) cout << "Right answer!" << endl;
                else cout << "Sorry, it's wrong~ and the right answer is: " << result;
            break;
        case 3: cout << num1 << '%' << num2 << '=' << "Please enter the anser: " << endl;
            cin >> inputResult; result = num1 % num2;
            if (inputResult == result) cout << "Right answer!" << endl;
                else cout << "Sorry, it's wrong~ and the right answer is: " << result;
            break;
    }
    return 0;
}