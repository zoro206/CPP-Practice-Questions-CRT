// Set 1 - Q9: Celsius to Fahrenheit
// A weather reporter receives the temperature of a hill station in Celsius but needs to
// display it in Fahrenheit for an international audience. Write a code to convert the
// temperature from Celsius to Fahrenheit.

#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = celsius * 9.0 / 5.0 + 32;
    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;

    return 0;
}
