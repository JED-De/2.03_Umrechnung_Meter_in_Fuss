#include <iostream>
using namespace std;
double meter;
double fuss;

int main()
{
	cout << "Bitte geben Sie die Laenge in Meter ein: ? ";
	cin >> meter;
	fuss = meter * 3.2808;
	cout << "Die Laenge in Fuss lautet: " << fuss << endl;
	system("PAUSE");
	return 0;
}