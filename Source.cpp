#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double a;
	double b;
	double c;
	double F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
// спосіб 1: розгалуження в скороченій формі
	if (c < 0 && x != 0)
		F = ( -a *x ) - c;
	if (c > 0 && x == 0)
		F = (x - a) / (-c);
	if(!(c < 0 && x != 0) && !(c > 0 && x == 0))
		F = (b * x) / (c - a);
	cout << "F =" << F << endl;

// спосіб 2: розгалуження в повній формі
	if (c < 0 && x != 0)
		F = (-a * x) - c;
	else
	if (c > 0 && x == 0)
		F = (x - a) / (-c);
	else
		F = (b * x) / (c - a);
	cout << "F =" << F << endl;
	
	cin.get();
	return 0;

}