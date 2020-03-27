#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int month, day, year;

	cout << "Enter date (mm/dd/yy): ";
	cin >> month;
	cin.ignore();
	cin >> day;
	cin.ignore();
	cin >> year;

	cout << "Dated this " << day;
	switch (day) {
		case 1: case 21: case 31:
			cout << "st"; break;
		case 2: case 22:
			cout << "nd"; break;
		case 3: case 23:
			cout << "rd"; break;
		default: cout << "th"; break;
	}
	cout << " day of ";

	switch (month) {
		case 1:  cout << "January";   break;
		case 2:  cout << "February";  break;
		case 3:  cout << "March";     break;
		case 4:  cout << "April";     break;
		case 5:  cout << "May";       break;
		case 6:  cout << "June";      break;
		case 7:  cout << "July";      break;
		case 8:  cout << "August";    break;
		case 9:  cout << "September"; break;
		case 10: cout << "October";   break;
		case 11: cout << "November";  break;
		case 12: cout << "December";  break;
	}

	cout << ", 20" << setw(2) << setfill('0') << year << ".\n";
	return 0;
}

