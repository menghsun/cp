#include <iostream>
using namespace std;

int main()
{
	int i, n;
	cout << "How many numbers do you want to reverse? ";
	cin >> n;

	int a[n];   

	cout << "Enter " << n << " numbers: ";
	for (i = 0; i < n; i++)
		cin >> a[i];

	cout << "In reverse order:";
	for (i = n - 1; i >= 0; i--)
		cout << " " << a[i];
	cout << endl;

	return 0;
}
