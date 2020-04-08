#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int cmd;
	float balance = 0.0f, credit, debit;

	cout << "*** ACME checkbook-balancing program ***\n";
	cout << "Commands: 0=clear, 1=credit, 2=debit, ";
	cout << "3=balance, 4=exit\n";
	for (;;) {
		cout << "Enter command: ";
		cin >> cmd;
		switch (cmd) {
		case 0:  /* clear */
			balance = 0.0f;
			break;
		case 1:  /* credit */
			cout << "Enter amount of credit: ";
			cin >> credit;
			balance += credit;
			break;
		case 2:  /* debit */
			cout << "Enter amount of debit: ";
			cin >> debit;
			balance -= debit;
			break;
		case 3:  /* display */
			cout << "Current balance: $" << setprecision(2) << fixed << balance << endl;
			break;
		case 4:  /* exit */
			return 0;
		default:
			cout << "Commands: 0=clear, 1=credit, 2=debit, ";
			cout << "3=balance, 4=exit\n";
			break;
		} // switch
	} // for
} // main
