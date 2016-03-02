#include <iostream>
using namespace std;

char s;

int main()
{
    cout << "请输入一个字符，我能查到它的ascii码哦： " << endl;
    cin >> s;
    cout << s << "的ascii码为： " << (int)s << endl;

    return 0;
}
