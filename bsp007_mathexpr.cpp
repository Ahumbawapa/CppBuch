//cppbuch/k1/mathexpr.cpp : Berechnung mathematsicher Ausdr�cke
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float x;
	cout << "x eingeben: ";
	cin >> x;

	cout << " x          = " << x 			<< '\n';
	cout << "fabs(x)     = " << fabs(x) 	<< '\n';
	cout << "sqrt(x)     = " << sqrt(x)	    << '\n';
	cout << "sin(x)      = " << sin(x)      << '\n';
	cout << "exp(x)      = " << exp(x)      << '\n';
	cout << "log(x)      = " << log(x)      << '\n';

	return 0;
}
