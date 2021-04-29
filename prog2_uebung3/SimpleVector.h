#pragma once

#include <iostream>

using namespace std;

class SimpleVector
{
private:
	int* data = nullptr;
	int size = 0;
public:
	SimpleVector();
	SimpleVector(int len);
	int getsize() const;
	int getdata(int i) const;
	SimpleVector(const SimpleVector& v2);
	~SimpleVector();

	SimpleVector& operator=(const SimpleVector& vref);
	void operator<<=(int nval);
	void operator+=(int nval);
	bool operator<(const SimpleVector& v);
};

ostream& operator<<(ostream& os, const SimpleVector& o);
