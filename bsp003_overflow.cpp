//cppbuch/k1/overflow
#include <limits>
#include <iostream>
using namespace std;

int main()
{
	int ai {50000}; 	//initialisierung mit 50000
	int bi {1000000}; //Initialisierung mit 100000
	int ci {ai * bi};	//Initialisierung mit dem Produkt

	cout << "int-Zahlen haben auf ihrem System " << 8*sizeof(int) << " Bits\n";
	cout << "Rechnung mit int: ";
	cout << ai << " * " << bi << " = " << ci << '\n';

	long al { 50000L};
	long bl { 1000000L};
	long cl {al * bl};

	cout << "long-Zahlen haben auf ihrem System " << 8*sizeof(long) << " Bits\n";
	cout << "Rechnung mit long: ";
	cout << al << " * " << bl << " = " << cl << '\n';
	cout << "long-Overflow produzieren:\n";
	al = numeric_limits<long>::max() / 2 + 1000;
	cout << "2 * " << al << " = " << (2*al) << " ?\n";

	return 0;
}
