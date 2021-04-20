#include "Complex.h"


using namespace std;

int main(int argc, char* argv[])
{
	Complex c1(1.0, 0.0);
	Complex c2(0.0, 2.0);

	Complex c3 = c1 + c2;

	Complex c3a = c1 * 3;

	//Complex c3b = 3 * c1;

	const Complex cc1(2.0, 0.0);
	const Complex cc2(0.0, 2.0);

	Complex cc4 = cc1 + cc2;



	_CrtDumpMemoryLeaks();
	
	return 0;
}