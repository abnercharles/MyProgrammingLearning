#pragma once
#include <iostream>
using namespace std;

class Rational
{
friend Rational operator+(const Rational &, const Rational &);
//friend Rational operator*(const Rational &, const Rational &);
friend bool operator>(const Rational &, const Rational &);
friend bool operator<(const Rational &, const Rational &);
friend bool operator==(const Rational &, const Rational &);
friend ostream & operator<<(ostream & os, const Rational &);
friend istream & operator>>(istream & is, Rational &);

private:
	int num;
	int den;

	void ReductFraction();

public:
	Rational(int n = 0, int d = 1);
	~Rational() {};
	Rational & Rational::operator=(const Rational &right);
	Rational operator*(const Rational &);
	operator double () const { return ((double)num / den); }
//	void create(int n, int d) { num = n; den = d; ReductFraction(); }
//	void add(const Rational &r1, const Rational &r2);
//	void multi(const Rational &r1, const Rational &r2);
//	void display() const { cout << num << '/' << den; }
};