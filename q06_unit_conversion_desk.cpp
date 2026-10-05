// Set 3 - Q6: The Unit Conversion Desk
// A student chooses one conversion: Celsius -> Fahrenheit, Fahrenheit -> Celsius,
// Kilometers -> Meters, or Meters -> Kilometers. The program then accepts the value and
// displays the converted result.
//
// INPUT: Conversion choice + one numerical value.
// EXPECTED OUTPUT: Display the converted value with the appropriate unit. Invalid choices
// must be handled.
// Example: 7 km -> 7000 m

#include <iostream>
using namespace std;

int main() {
    int choice;
    double value;

    cout << "Conversion menu:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Kilometers to Meters\n4. Meters to Kilometers\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> value;
            cout << value << " C = " << value * 9.0 / 5.0 + 32 << " F" << endl;
            break;
        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> value;
            cout << value << " F = " << (value - 32) * 5.0 / 9.0 << " C" << endl;
            break;
        case 3:
            cout << "Enter distance in kilometers: ";
            cin >> value;
            cout << value << " km = " << value * 1000 << " m" << endl;
            break;
        case 4:
            cout << "Enter distance in meters: ";
            cin >> value;
            cout << value << " m = " << value / 1000 << " km" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
