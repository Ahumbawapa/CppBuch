//Demoprogramm zu Codeausschnitten S.45ff
#include <iostream>
using namespace std;

int main ()
{
/*
	//Initialisierungmöglichkeiten
	int var0 {1};
	int var1 = 1;
	int var2 {}; 		//var 2 ist 0
	auto var3 {3}; 		//var3 ist vom Typ int
	auto var4 = 1; 		//var4 ist vom Typ int
	auto var5 = 1u;		//var5 ist vom Typ unsigned int

	cout << "var0 = " << var0 << endl;
	cout << "var1 = " << var1 << endl;
	cout << "var2 = " << var2 << endl;
	cout << "var3 = " << var3 << endl;
	cout << "var4 = " << var4 << endl;
	cout << "var5 = " << var5 << endl;

	int wert1 = 9.42; // keine Fehlermeldung wert1 wird 9
	//int wert2 {9.42}; // Fehlermeldung

	cout << "wert1 = " << wert1 << endl;
*/

	/*	//ganzzahlige Division
	int m {9};
	int n {5};
	int ergebnis {m/n};
	int rest {m%n};

	cout << m << " : " << n << " = " << ergebnis << " | Rest: " << rest << endl;
*/

	//Bit-Operatoren
	int k {0b0000000000000101}; // k = 5
	cout << "k: " << k << endl;

	int c = k << 2; //Bitmuster von k wird um 2 Stellen nach links verschoben (*4) und c zugewiesen
	cout << "c: " << c << "; k: " << k << endl;

	//Bitweise UND-Verknüpfung
	// k: 0000 0000 0000 0101 -> 5
	// c: 0000 0000 0001 0100 -> 2^4 + 2^2 = 16 + 4 = 20
	cout << "c = " << c << "; k = " << k << " ";

	c = c & k;		// k: 0000 0000 0000 0101
					// c: 0000 0000 0001 0100
					// ----------------------
					// c. 0000 0000 0000 0100 -> 2^2 = 4
	cout << "c & k  == " << c;



	return 0;

}
