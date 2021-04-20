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

/*Complex Complex::operator*(const int& a)
{
	Complex r = Complex(this->getRe)
}
*/
