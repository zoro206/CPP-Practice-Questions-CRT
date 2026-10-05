// Set 1 - Q13: Kelvin to Fahrenheit
// A weather monitoring device installed in Antarctica records temperature in Kelvin, but
// the control room staff needs the value in Fahrenheit for analysis. Write a code to
// convert the temperature from Kelvin to Fahrenheit.

#include <iostream>
using namespace std;

int main() {
    double kelvin, fahrenheit;
    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;

    fahrenheit = (kelvin - 273.15) * 9.0 / 5.0 + 32;
    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;

    return 0;
}
