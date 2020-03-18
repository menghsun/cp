#include <iostream>
#include <string>
using namespace std;

int main()
{
	int d, first_sum, second_sum, total;
	string first_group, second_group;

	cout << "Enter the first (single) digit: ";
	cin >> d;
	cout << "Enter first group of five digits: ";
	cin >> first_group;
	cout << "Enter second group of five digits: ";
	cin >> second_group;

	first_sum = d + (first_group[1]-48) + (first_group[3]-48) + (second_group[0]-48) + (second_group[2]-48) + (second_group[4]-48);
	second_sum =  (first_group[0]-48) + (first_group[2]-48) + (first_group[4]-48) + (second_group[1]-48) + (second_group[3]-48);
	total = 3 * first_sum + second_sum;

	cout << "Check digit: " << 9 - ((total - 1) % 10) << "\n";

	return 0;
}


