#include <iostream>
#include <iomanip>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)
using namespace std;

int main()
{
    float fahrenheit, celsius;

    cout << "Enter Fahrenheit temperature: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    cout << "Celsius equivalent: " << setprecision(1) << fixed << celsius;

	return 0;
}
