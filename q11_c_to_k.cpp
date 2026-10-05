// Set 1 - Q11: Celsius to Kelvin
// During a science experiment, a student measures the temperature of a chemical solution
// in Celsius. The laboratory system stores all temperatures in Kelvin. Write a code to
// convert the temperature from Celsius to Kelvin.

#include <iostream>
using namespace std;

int main() {
    double celsius, kelvin;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    kelvin = celsius + 273.15;
    cout << "Temperature in Kelvin = " << kelvin << endl;

    return 0;
}
