#include <iostream>
using namespace std;
void call(int (&a)[5]);
//int main()
//{
//	int a[] = { 1,22,4,34,5 };
//	call(a);
//	for (int i = 0; i < 5; ++i)
//		cout << a[i];
//}

void call(int (&a)[5])
{
	a[2] = 65;
}