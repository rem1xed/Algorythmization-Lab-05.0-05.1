#include <iostream>
#include <cmath>

using namespace std;

double h(const double x,const double y, const double z);

int main()
{
	double a, b;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	double c = (h(a, b, 1) + h(1,a,b)) / (1 + h(pow(a, 2) + pow(b, 2), 1, 0));

	cout << "c = " << c;

	return 0;
}

double h(const double x, const double y,const double z) 
{
	return (x + y + z) / (pow(x, 2) + pow(y, 2) + pow(z, 2));
}