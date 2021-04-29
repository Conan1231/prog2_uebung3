#include "Complex.h"

Complex::Complex()
{

}

Complex::Complex(double real_part, double imag_part) : re(real_part), im(imag_part)
{

}

Complex::~Complex()
{

}

double Complex::getRe() {
	return re;
}

double Complex::getIm() {
	return im;
}

double Complex::getRe() const {
	return re;
}
double Complex::getIm() const {
	return im;
}

void Complex::setRe(double re) {
	this->re = re;
}

void Complex::setIm(double im) {
	this->im = im;
}



Complex Complex::operator+(const Complex& p)
{
	Complex r = Complex(getRe(), getIm());
	r.setRe( getRe() + p.getRe() ); // r.re += p.re;
	r.setIm( getIm() + p.getIm() );
	return r;
}

Complex Complex::operator+(const Complex& p) const
{
	Complex r = Complex(getRe(), getIm());
	r.setRe(getRe() + p.getRe()); // r.re += p.re;
	r.setIm(getIm() + p.getIm());
	return r;
}

Complex Complex::operator*(const int& a)
{
	Complex r = Complex(this->getRe() * a, this->getIm() * a);
	return r;
}

Complex Complex::operator*(const Complex& p) {
	Complex r = Complex(getRe(), getIm());
	r.setRe(getRe() * p.getRe() - getIm() * p.getIm());
	r.setIm(getRe() * p.getIm() + p.getRe() * getIm());
	return r;
}

Complex Complex::operator*(const Complex& p) const {
	Complex r = Complex(getRe(), getIm());
	r.setRe(getRe() * p.getRe() - getIm() * p.getIm());
	r.setIm(getRe() * p.getIm() + p.getRe() * getIm());
	return r;
}

Complex Complex::operator+=(const Complex& p) {
	Complex r = Complex(getRe(), getIm());
	r.setRe(getRe() + p.getRe()); // r.re += p.re;
	r.setIm(getIm() + p.getIm());
	return r;

}

ostream& operator<<(ostream& os, const Complex& o)
{
	if (o.getIm() < 0) {
		os << o.getRe() << " " << o.getIm() << "i";
	}
	else {
		os << o.getRe() << " + " << o.getIm() << "i";
	}
	return os;
}

Complex operator*(const int& a, const Complex& o) {
	Complex r = Complex(a * o.getRe(), a * o.getIm());
	return r;
}

