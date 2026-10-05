// Set 3 - Q7: The Engineering Measurement Assistant
// First ask what the student wants to calculate: Area or Volume. If Area is selected,
// offer Rectangle, Circle, or Right-Angle Triangle. If Volume is selected, offer Cone,
// Cuboid, or Sphere. Then ask only for the dimensions required by the chosen shape/solid.
//
// INPUT: Calculation type -> Shape/Solid -> Required dimensions.
// EXPECTED OUTPUT: Display the selected calculation and the calculated area or volume.
// Invalid choices should be handled.
// Example: Volume -> Cuboid -> 10 x 5 x 4 -> 200
// Challenge: Design the complete flow yourself. Focus on decisions, alternatives, invalid
// choices, and the input required after each selection.

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    int type, shape;
    double a, b, c;

    cout << "What do you want to calculate?\n1. Area\n2. Volume\nEnter choice: ";
    cin >> type;

    switch (type) {
        case 1:
            cout << "Select shape:\n1. Rectangle\n2. Circle\n3. Right-Angle Triangle\nEnter choice: ";
            cin >> shape;
            switch (shape) {
                case 1:
                    cout << "Enter length and breadth: ";
                    cin >> a >> b;
                    cout << "Area of rectangle = " << a * b << endl;
                    break;
                case 2:
                    cout << "Enter radius: ";
                    cin >> a;
                    cout << "Area of circle = " << PI * a * a << endl;
                    break;
                case 3:
                    cout << "Enter base and height: ";
                    cin >> a >> b;
                    cout << "Area of right-angle triangle = " << 0.5 * a * b << endl;
                    break;
                default:
                    cout << "Invalid shape choice" << endl;
            }
            break;
        case 2:
            cout << "Select solid:\n1. Cone\n2. Cuboid\n3. Sphere\nEnter choice: ";
            cin >> shape;
            switch (shape) {
                case 1:
                    cout << "Enter radius and height: ";
                    cin >> a >> b;
                    cout << "Volume of cone = " << (1.0 / 3.0) * PI * a * a * b << endl;
                    break;
                case 2:
                    cout << "Enter length, breadth and height: ";
                    cin >> a >> b >> c;
                    cout << "Volume of cuboid = " << a * b * c << endl;
                    break;
                case 3:
                    cout << "Enter radius: ";
                    cin >> a;
                    cout << "Volume of sphere = " << (4.0 / 3.0) * PI * a * a * a << endl;
                    break;
                default:
                    cout << "Invalid solid choice" << endl;
            }
            break;
        default:
            cout << "Invalid calculation type" << endl;
    }

    return 0;
}
