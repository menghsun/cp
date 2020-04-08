#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, n, odd, square;

	cout << "Enter number of entries in table: ";
	cin >> n;

	i = 1;
	odd = 3;
	for (square = 1; i <= n; odd += 2) {
		cout << setw(10) << i << setw(10) << square << endl;
		++i;
		square += odd;
	}

	return 0;
}

