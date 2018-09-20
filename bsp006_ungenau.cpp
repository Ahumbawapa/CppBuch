//cppbuch/k1/ungenau.cpp
#include<iostream>
using namespace std;

int main ()
{
	float a {1.234567E-7f}; 	//1,234567 * 10^-7
	float b {1.000000f};
	float c {-b};

	cout << "Ungenauigkeit bei float-Arithmetik:\n";
	cout << "(a+b)+c = " << (a+b)+c << '\n';
	cout << "a+(b+c) = " << a+(b+c) << '\n';

	return 0;
}
