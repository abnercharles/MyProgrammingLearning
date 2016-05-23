#include "Rational.h"

Rational::Rational(int n, int d): num(n), den(d)
{
	ReductFraction();
}

Rational & Rational::operator=(const Rational & right)
{
	if (this == &right) return *this;

	num = right.num;
	den = right.den;

	return *this;
}

Rational operator+(const Rational &r1, const Rational &r2)
{	/*Rational tmp;
	
	tmp.num = r1.num * r2.den + r1.den * r2.num;
	tmp.den = r1.den * r2.den;
	tmp.ReductFraction();
	return tmp;*/
	return(Rational(r1.num * r2.den + r1.den * r2.num, r1.den * r2.den));
}

Rational Rational::operator*(const Rational &r1)
{
	return(Rational(num * r1.num, den * r1.den));
}
/*Rational operator*(const Rational &r1, const Rational &r2)
{
	Rational tmp;
	tmp.num = r1.num * r2.num;
	tmp.den = r1.den * r2.den;
	tmp.ReductFraction();
	return tmp;
	return(Rational(r1.num * r2.num, r1.den * r2.den));
}*/

bool operator>(const Rational &r1, const Rational &r2)
{
	return (r1.num * r2.den) > (r1.den * r2.num);
}

bool operator<(const Rational &r1, const Rational &r2)
{
	return (r1.num * r2.den) < (r1.den * r2.num);
}

bool operator==(const Rational &r1, const Rational &r2)
{
	return (r1.num == r2.num) && (r1.den == r2.den);
}

ostream & operator<<(ostream & os, const Rational &r1)
{
	os << r1.num << '/' << r1.den;
	return(os);
}

istream & operator>>(istream & is, Rational &r1)
{	
	char gang;
	is >> r1.num >> gang >> r1.den;
	r1.ReductFraction();
	return(is);
}

/*void Rational::add(const Rational &r1, const Rational &r2)
{
	num = r1.num * r2.den + r1.den * r2.num;
	den = r1.den * r2.den;
	ReductFraction();
}
void Rational::multi(const Rational &r1, const Rational &r2)
{
	num = r1.num * r2.num;
	den = r1.den * r2.den;
	ReductFraction();
}*/

void Rational::ReductFraction()
{
	int temp = (num > den) ? den : num;
	for (; temp > 1; --temp)
		if (num % temp == 0 && den % temp == 0) { num /= temp; den /= temp; break; }
}
