// Set 1 - Q24: Cone volcano volume (input in cm, output in m and inch)
// During a science exhibition, students build a cone-shaped model volcano. They need to
// find the volume of the volcano model to know how much material it can contain. Write a
// code to calculate the volume of the cone.
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

    double radius, height;
    cout << "Enter radius and height of the cone (in cm): ";
    cin >> radius >> height;

    double volumeCm = (1.0 / 3.0) * PI * radius * radius * height;   // result in cm^3
    cout << "Volume: " << volumeCm / (CM_PER_M * CM_PER_M * CM_PER_M) << " m^3, " << volumeCm / (CM_PER_INCH * CM_PER_INCH * CM_PER_INCH) << " inch^3" << endl;

    return 0;
}
