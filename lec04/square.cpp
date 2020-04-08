#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, n;

	cout << "Enter number of entries in table: ";
	cin >> n;

	i = 1;
	while (i <= n) {
		cout << setw(10) << i << setw(10) << i * i << endl;
		i++;
	}
	return 0;
}
