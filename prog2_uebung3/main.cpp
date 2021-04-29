#include "Complex.h"
#include "SimpleVector.h"

using namespace std;

void aufgabe3_1() {
	Complex c1(1.0, 0.0);
	Complex c2(0.0, 1.0);

	cout << "c1 = " << c1 << endl;
	cout << "c2 = " << c2 << endl;
	cout << "SUMME: " << c1 + c2 << endl;
	cout << "PRODUKT: " << c1 * c2 << endl;
	cout << "PRODUKT: " << 3 * c1 * c2 << endl;
	cout << "PRODUKT: " << c1 * 3 << endl;
	cout << "Summe in place: " << (c1 += c2) << endl;
	const Complex cc1(2.0, 0.0);
	const Complex cc2(0.0, 2.0);

	cout << "cc1 = " << cc1 << endl;
	cout << "cc2 = " << cc2 << endl;
	cout << "const SUMME : " << cc1 + cc2 << endl;
	cout << "const PRODUKT : " << cc1 * cc2 << endl;
}

void test1(int len) {
	SimpleVector v1(len); SimpleVector v2(len); SimpleVector v3(2 * len);

	cout << "---Ausgabe der Vektoren nach der Initialisierung ---" << endl;
	cout << v1 << endl;
	cout << v2 << endl;
	cout << v3 << endl;
	
	cout << "--- Ausgabe der Vektoren nach einer Addition ---" << endl;
	v1 <<= 1; v2 <<= 2; v3 <<= 3;
	cout << v1 << endl;
	cout << v2 << endl;
	cout << v3 << endl;
	
	if (v1 < v3) {
		SimpleVector v4 = v2;
		v4 += 5;
		cout << "v4 = " << v4 << endl;
	}
	
	cout << "Ausgabe der Vektoren nach v1 = v2" << endl;
	v1 = v2;
	cout << v1 << endl;
	cout << v2 << endl;
	cout << v3 << endl;
}


int main(int argc, char* argv[])
{
	aufgabe3_1();

	cout << endl << "Aufgabe 3.2" << endl;
	test1(3);
	
	_CrtDumpMemoryLeaks();
	
	return 0;
}