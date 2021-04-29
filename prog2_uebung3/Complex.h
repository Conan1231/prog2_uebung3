#pragma once

#include <iostream>
#include <exception>

using namespace std;

class Complex
{
protected:
	double im;
	double re;
public:
	Complex();
	Complex(double real_part, double imag_part);
	~Complex();

	double getIm();
	double getRe();

	double getIm() const;
	double getRe() const;

	void setRe(double re);
	void setIm(double im);

	Complex operator+(const Complex& p);
	Complex operator+(const Complex& p) const;
	
	Complex operator*(const int& a);
	Complex operator*(const Complex& p);
	Complex operator*(const Complex& p) const;

	Complex operator+=(const Complex& p);

	
};

ostream& operator<<(ostream& os, const Complex& o);
Complex operator*(const int& a, const Complex& o);