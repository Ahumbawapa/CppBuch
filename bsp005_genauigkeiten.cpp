//cppbuch/k1/genauigkeiten.cpp
#include <limits>
#include <iostream>

using namespace std;

int main ()
{
	cout << "Die Genauigkeit von float betraegt etwa "
	     << numeric_limits<float>::digits10 << " Dezimalstellen.\n";

	cout << "Die Genauigkeit von double betraegt etwa "
		 << numeric_limits<double>::digits10 << " Dezimalstellen.\n";

	cout << "Die Genauigkeit von long-double betraegt etwa "
		 << numeric_limits<long double>::digits10 << " Dezimalstellen.\n";

	return 0;
}
