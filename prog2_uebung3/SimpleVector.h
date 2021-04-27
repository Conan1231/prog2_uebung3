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
	//SimpleVector(const SimpleVector& v2);
	~SimpleVector();

	SimpleVector& operator=(const SimpleVector& vref);
};

