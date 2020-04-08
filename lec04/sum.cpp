#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;

	cout << "Enter integers (0 to terminate): ";

	cin >> n;
	while (n != 0) {
		sum += n;
		cin >> n;
	}
	cout << "The sum is: " << sum << endl;

	return 0;
}


