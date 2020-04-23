#include <iostream>
using namespace std;

double average(double a, double b)
{
	return (a + b) / 2;
}

int main()
{
	double x, y, z;

	cout << "Enter three numbers: ";
	cin >> x >> y >> z;

	cout << "Average of " << x << " and " << y << " :" << average(x, y) << endl;
	cout << "Average of " << y << " and " << z << " :" << average(y, z) << endl;
	cout << "Average of " << x << " and " << z << " :" << average(x, z) << endl;

	return 0;
}
