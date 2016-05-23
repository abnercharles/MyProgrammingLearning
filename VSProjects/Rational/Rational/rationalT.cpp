#include <iostream>
using namespace std;

struct rationalT
{
	int num, den;
};

rationalT CreateRational(int, int);
rationalT AddRational(const rationalT &, const rationalT &);
rationalT MultiplyRational(const rationalT &, const rationalT &);
double GetRational(const rationalT &);
void PrintRational(rationalT &);
void Simplify(rationalT &);
int getGCD(int, int);

int main()
{
	rationalT ra = CreateRational(4, 6);
	rationalT rb = CreateRational(3, 7);
	PrintRational(ra);
	PrintRational(rb);
	PrintRational(AddRational(ra, rb));
	cout << GetRational(ra);

}

rationalT CreateRational(int num, int den)
{
	return(rationalT { num,den });
}

rationalT AddRational(const rationalT &r1, const rationalT &r2)
{
	return(CreateRational((r1.num * r2.den + r1.den * r2.num), (r1.den * r2.den)));
}

rationalT MultiplyRational(const rationalT &r1, const rationalT r2)
{
	return(CreateRational((r1.num*r2.num), (r1.den*r2.den)));
}

double GetRational(const rationalT &r)
{
	return(((double)r.num) / r.den);
}

void PrintRational(rationalT &ra)
{
	Simplify(ra);
	cout << ra.num << '/' << ra.den << endl;
}

void Simplify(rationalT &a)
{
	int GCD = getGCD(a.num, a.den);
	a.num /= GCD;
	a.den /= GCD;
}

int getGCD(int a, int b)
{
	int t = 0;
	while (b != 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}