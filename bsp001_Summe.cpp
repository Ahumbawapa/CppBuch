#include <iostream>
using namespace std;


int main ()
{
	int summe;
	int summand1;
	int summand2;

	//Lies zwei Zahlen ein
	cout << "Zwei ganze Zahlen eingeben: ";
	cin  >> summand1 >> summand2;
	/* Berechnet die Summe beider Zahlen */
	summe = summand1 + summand2;
	//Zeige das Ergebnis auf dem Bildschirm an
	cout << "Summe: " << summe << '\n';
	return 0;
}
