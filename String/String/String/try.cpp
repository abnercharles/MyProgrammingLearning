#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
	MyString s = MyString("shit");
	int length = s.lengthOfString();
	s.print();
	cout << length << endl;
	s.strplus("fuvk");
	s.print();
	system("pause");
}