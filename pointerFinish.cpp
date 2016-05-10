#include <iostream>
#include <string>
const int STEP = 8;
using namespace std;
char * getstr();

int main()
{
	char * str = NULL;
	str = getstr();
	printf("nstr = %s", str);
	free(str);
	system("pause");
	return 0;

	//char * p;
	//p = getstr();
	//cout << p << endl;
}

/*char * getString()
{
	char * string;
	//    string = new char[10];

	cin >> new char [];

	return string;
}*/

char * getstr()
{
	char * temp, * str = (char *)malloc(STEP);
	int c = 0, len = 0, times = 1, number = 0;
	if (!str)
	{
		cout << "out of memory!" << endl;
		return (char *)NULL;
	}

	number += times * STEP;
	while ((c = getchar()) != '\n')
	{
		if (len == number)
		{
			times++;
			number = times * STEP;
			temp = str;
			str = (char*)realloc(str, number);
			if (str == NULL)
			{
				printf("Out of memory!");
				str = temp;
				break;
			}
		}
		*(str + len) = c;
		len++;
	}

	str = (char *)realloc(str, len + 1);
	*(str + len) = '\0';
	return str;

}


