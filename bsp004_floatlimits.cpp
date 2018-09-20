//Auszug aus cppbuch/k1/floatlimits.h
#include <iostream>
#include <limits>
using namespace std;

int main()
{
	cout << "Grenzwerte fuer Float-Zahl_Typen\n";

	cout << "Float-Min:         " << numeric_limits<float>::min() << '\n';
	cout << "Float-Max:         " << numeric_limits<float>::max() << '\n';

	cout << "Double-Min         " << numeric_limits<double>::min() << '\n';
	cout << "Double-Max         " << numeric_limits<double>::max() << '\n';

	cout << "Long-Double-Min    " << numeric_limits<long double>::min() << '\n';
	cout << "Long-Double-Max    " << numeric_limits<long double>::max() << '\n';

	cout << "float- und double-Zahlen entsprechen";
	if(!numeric_limits<float>::is_iec559)
	{
		cout << " nicht ";
	}

	cout << " dem IEC 559 ( IEEE 754)-Standard.\n";
	
	return 0;
	
}
