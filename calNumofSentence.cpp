#include <iostream>
using namespace std;

int main()
{
    char sentence [80], prev = ' ';
    int i, num = 0;

    cin.getline(sentence, 80);

    for(i = 0; sentence[i] != '\0'; ++i){
        if (prev == ' ' && sentence[i] != ' ') ++num;
        prev = sentence[i];

    }
    cout << "The sum words of the sentence is: " << num << endl;

    return 0;
}