// Set 3 - Q5: The Architect's Shape Calculator
// The application first asks which shape's area is required: Circle, Rectangle, Square, or
// Right-Angle Triangle. After the shape is selected, only the dimensions needed for that
// shape should be requested.
//
// INPUT: Shape choice + dimensions required by the selected shape.
// EXPECTED OUTPUT: Display the selected shape and its calculated area. Invalid choices
// must be handled.
// Example: Rectangle, 10 x 6 -> Area = 60

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    int choice;
    double a, b;

    cout << "Select shape:\n1. Circle\n2. Rectangle\n3. Square\n4. Right-Angle Triangle\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> a;
            cout << "Circle, Area = " << PI * a * a << endl;
            break;
        case 2:
            cout << "Enter length and breadth: ";
            cin >> a >> b;
            cout << "Rectangle, Area = " << a * b << endl;
            break;
        case 3:
            cout << "Enter side: ";
            cin >> a;
            cout << "Square, Area = " << a * a << endl;
            break;
        case 4:
            cout << "Enter base and height: ";
            cin >> a >> b;
            cout << "Right-Angle Triangle, Area = " << 0.5 * a * b << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
