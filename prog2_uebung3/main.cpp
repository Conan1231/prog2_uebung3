#include "Complex.h"


using namespace std;

int main(int argc, char* argv[])
{
	Complex c1(1.0, 0.0);
	Complex c2(0.0, 1.0);

	cout << "c1 = " << c1 << endl;
	cout << "c2 = " << c2 << endl;
	cout << "SUMME: " << c1 + c2 << endl;
	cout << "PRODUKT: " << c1 * c2 << endl;
	//cout << "PRODUKT: " << 3 * c1 * c2 << endl;
	cout << "PRODUKT: " << c1 * 3 << endl;
	//cout << "Summe in place: " << (c1 += c2) << endl;


	//Complex c3b = 3 * c1;
	//c3b = operator*(3, c1);

	//test
	const Complex cc1(2.0, 0.0);
	const Complex cc2(0.0, 2.0);

	cout << "cc1 = " << cc1 << endl;
	cout << "cc2 = " << cc2 << endl;
	cout << "const SUMME : " << cc1 + cc2 << endl;
	cout << "const PRODUKT : " << cc1 * cc2 << endl;

	_CrtDumpMemoryLeaks();
	
	return 0;
}