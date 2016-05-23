#pragma once
using namespace std;
class MyString
{
private:
	const char *content;
	int length;
public:
	MyString(const char *);
	~MyString() { delete []content; };
	void print()const;
	int lengthOfString();
	void strplus(const char *);
};