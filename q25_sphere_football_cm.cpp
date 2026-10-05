// Set 1 - Q25: Sphere football volume (input in cm, output in m and inch)
// A sports company is designing a spherical football. The designer wants to know the
// volume of the football for manufacturing purposes. Write a code to calculate the volume
// of the sphere.
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
    cout << "Enter radius of the sphere (in cm): ";
    cin >> radius;

    double volumeCm = (4.0 / 3.0) * PI * radius * radius * radius;   // result in cm^3
    cout << "Volume: " << volumeCm / (CM_PER_M * CM_PER_M * CM_PER_M) << " m^3, " << volumeCm / (CM_PER_INCH * CM_PER_INCH * CM_PER_INCH) << " inch^3" << endl;

    return 0;
}
