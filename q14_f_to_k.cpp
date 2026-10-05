// Set 1 - Q14: Fahrenheit to Kelvin
// An engineer in a thermal power plant receives machine temperature readings in
// Fahrenheit, but the maintenance software requires the values in Kelvin. Write a code to
// convert the temperature from Fahrenheit to Kelvin.

#include <iostream>
using namespace std;

int main() {
    double fahrenheit, kelvin;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    kelvin = (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
    cout << "Temperature in Kelvin = " << kelvin << endl;

    return 0;
}
