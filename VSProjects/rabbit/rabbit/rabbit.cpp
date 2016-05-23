#include <iostream>
#include "Random.h"
using namespace std;

const int RACE_END = 70;

int moveTortoise();
int moveHare();
void printPosition(int, int, int);

/*int main()
{
	int hare = 0, tortoise = 0, timer = 0;
	RandomInit();
	cout << "timer  tortoise  hare\n";

	while (true)
	{
		tortoise += moveTortoise();
		hare += moveHare();
		printPosition(timer, tortoise, hare);
		++timer;

		if (hare >= RACE_END || tortoise >= RACE_END)
			break;
	}

	if (hare > tortoise) cout << "\nhare wins!\n";
	else if (hare == tortoise)cout << "\nfare!\n";
	else cout << "\ntortoise wins!\n";

	getchar();
	return 0;
}*/

int moveTortoise()
{
	int rand = RandomInteger(0, 9);
	if (rand < 5)
		return 3;
	else if (rand < 7)
		return -6;
	else return 1;
}

int moveHare()
{
	int rand = RandomInteger(0, 9);
	if (rand < 2) return 0;
	else if (rand < 4) return -9;
	else if (rand < 5) return 14;
	else if (rand < 8) return 3;
	else return -2;
}

void printPosition(int timer, int t, int h)
{
	if (timer % 6 == 0) cout << endl;
	cout << timer << '\t' << t << '\t' << h << '\n';
}