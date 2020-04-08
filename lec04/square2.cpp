#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, n;

	cout << "Enter number of entries in table: ";
	cin >> n;

	for (i = 1; i <= n; i++)
		cout << setw(10) << i << setw(10) << i * i << endl;   

	return 0;
}

