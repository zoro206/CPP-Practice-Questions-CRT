// Set 1 - Q10: Fahrenheit to Celsius
// A scientist working in a laboratory records the temperature in Fahrenheit, but the
// research report requires the values in Celsius. Write a code to convert the temperature
// from Fahrenheit to Celsius.

#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << "Temperature in Celsius = " << celsius << endl;

    return 0;
}
