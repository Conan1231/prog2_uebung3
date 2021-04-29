#include "SimpleVector.h"


SimpleVector::SimpleVector()
{
	this->size = 1;
}

SimpleVector::SimpleVector(int len)
{
	this->data = new int[len];
	if (this->data != nullptr) {
		for (int i = 0; i < len; i++) {
			this->data[i] = 0;
		}
	}
	this->size = len;
}

int SimpleVector::getsize() const
{
	return size;
}

int SimpleVector::getdata(int i) const
{
	return data[i];
}

SimpleVector::SimpleVector(const SimpleVector& v2)
{
	data = new int[v2.size];
	for (int i = 0; i < v2.size; i++) {
		data[i] = v2.data[i];
	}
	size = v2.size;
}

SimpleVector::~SimpleVector()
{
	if (this->data != nullptr) {
		delete[] data;
		data = nullptr;
		size = 0;
	}
}

SimpleVector& SimpleVector::operator=(const SimpleVector& vref)
{
	if (this == &vref) {
		return *this;
	}
	this->~SimpleVector();

	this->size = vref.size;
	
	this->data = new int[this->size];
	if (this->data != nullptr) {
		for (int i = 0; i < size; i++) {
			this->data[i] = vref.data[i];
		}
	}
	return *this;
}

ostream& operator<<(ostream& os, const SimpleVector& o)
{
	os << "V[" << o.getsize() << "]:";
	for (int i = 0; i < o.getsize(); i++) {
		os << o.getdata(i) << " ";
	}
		return os;
}

void SimpleVector::operator<<=(int nval) {
	for (int i = 0; i < this->size; i++) {
		this->data[i] = nval;
	}
		
}

void SimpleVector::operator+=(int nval) {
	for (int i = 0; i < this->size; i++) {
		this->data[i] = data[i] + nval;
	}
}

bool SimpleVector::operator<(const SimpleVector& v) {
	if (this->getsize() < v.getsize()) {
		return 1;
	}
	else {
		return 0;
	}
}