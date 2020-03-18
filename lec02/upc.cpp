#include <iostream>
#include <string>
using namespace std;

int main()
{
	int d, first_sum, second_sum, total;
	string first_group, second_group;

	cout << "First digit: ";
	cin >> d;
	cout << "1st group (5 digits): ";
	cin >> first_group;
	cout << "2nd group (5 digits): ";
	cin >> second_group;

	first_sum = d + (first_group[1]-'0') + (first_group[3]-'0') + (second_group[0]-'0') + (second_group[2]-'0') + (second_group[4]-'0');
	second_sum =  (first_group[0]-'0') + (first_group[2]-'0') + (first_group[4]-'0') + (second_group[1]-'0') + (second_group[3]-'0');
	total = 3 * first_sum + second_sum;

	cout << "Check digit: " << 9 - ((total - 1) % 10) << "\n";

	return 0;
}


