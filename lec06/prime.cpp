#include <iostream>
using namespace std;

bool is_prime(int n)
{
	int divisor;

	if (n <= 1)
		return false;

	for (divisor = 2; divisor * divisor <= n; divisor++)
		if (n % divisor == 0)
			return false;

	return true;
}

int main()
{
	int n;

	cout << "Enter a number: ";
	cin >> n;

	if (is_prime(n))
		cout << "Prime\n";
	else
		cout << "Not prime\n";

	return 0;
}

