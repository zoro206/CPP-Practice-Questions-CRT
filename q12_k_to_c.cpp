// Set 1 - Q12: Kelvin to Celsius
// A space research center receives temperature readings from a satellite in Kelvin, but
// the scientists want to analyze the data in Celsius. Write a code to convert the
// temperature from Kelvin to Celsius.

#include <iostream>
using namespace std;

int main() {
    double kelvin, celsius;
    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;

    celsius = kelvin - 273.15;
    cout << "Temperature in Celsius = " << celsius << endl;

    return 0;
}
