#include <iostream>
using namespace std;

int main()
{
	bool digit_seen[10] = {false};
	int digit;
	long n;

	cout << "Enter a number: ";
	cin >> n;

	while (n > 0) {
		digit = n % 10;

		if (digit_seen[digit])
			break;

		digit_seen[digit] = true;
		n /= 10;
	}

	if (n > 0)
		cout << "Repeated digit\n";
	else
		cout << "No repeated digit\n";

	return 0;
}
