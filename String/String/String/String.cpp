#include "MyString.h"
#include "string.h"
#include <iostream>
using namespace std;


MyString::MyString(const char *cont) :content(cont) { length = strlen(content); }
void MyString::print()const {
	cout << content << endl;
}
int MyString::lengthOfString()
{
	return length;
}
void MyString::strplus(const char *plus)
{
	int totalLength = strlen(plus) + strlen(content);
	char *newstr = new char[totalLength + 1];

	for (int i = 0; content[i] != '\0'; ++i)
		newstr[i] = content[i];
	for (int j = 0; plus[j] != '\0'; ++j)
		newstr[length + j] = plus[j];
	newstr[totalLength] = '\0';

	length = totalLength;
	content = newstr;
};