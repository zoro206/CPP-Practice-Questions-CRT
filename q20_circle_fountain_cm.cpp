// Set 1 - Q20: Circle fountain (input in cm, output in m and inch)
// A park has a circular fountain in the center. The gardener wants to know the area
// covered by the fountain and the distance around its boundary for decoration lights.
// Write a code to calculate the area and circumference of the circular fountain.
//
// REBUILT: The user provides the input in cm; calculate and display the result in both
// meters and inches.
// Hint: 1 m = 100 cm, 1 inch = 2.54 cm (area uses the square of the factor, volume uses
// the cube).

#include <iostream>
using namespace std;

int main() {
    const double CM_PER_M = 100.0;   // 1 m = 100 cm
    const double CM_PER_INCH = 2.54;  // 1 inch = 2.54 cm
    const double PI = 3.14159265358979;

    double radius;
    cout << "Enter radius of the fountain (in cm): ";
    cin >> radius;

    double areaCm = PI * radius * radius;   // result in cm^2
    cout << "Area: " << areaCm / (CM_PER_M * CM_PER_M) << " m^2, " << areaCm / (CM_PER_INCH * CM_PER_INCH) << " inch^2" << endl;
    double circumferenceCm = 2 * PI * radius;   // result in cm
    cout << "Circumference: " << circumferenceCm / (CM_PER_M) << " m, " << circumferenceCm / (CM_PER_INCH) << " inch" << endl;

    return 0;
}
