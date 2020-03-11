#include <iostream>
using namespace std;
int main()
{
	int height, length, width, volume, weight;

	cout << "Enter box height: ";
	cin >> height;
	cout << "Enter box length: ";
	cin >> length;
	cout << "Enter box width: ";
	cin >> width;


	volume = height * length * width;
	weight = (volume + 165) / 166;

	cout << "Volume: " << volume << endl;
	cout << "Dimensional weight: " << weight << endl;

	return 0;
}

