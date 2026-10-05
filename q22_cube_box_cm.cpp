// Set 1 - Q22: Cube box volume (input in cm, output in m and inch)
// A toy company manufactures cube-shaped gift boxes. The manager wants to know how much
// space each box can hold. Write a code to calculate the volume of the cube-shaped box.
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

    double side;
    cout << "Enter side of the cube (in cm): ";
    cin >> side;

    double volumeCm = side * side * side;   // result in cm^3
    cout << "Volume: " << volumeCm / (CM_PER_M * CM_PER_M * CM_PER_M) << " m^3, " << volumeCm / (CM_PER_INCH * CM_PER_INCH * CM_PER_INCH) << " inch^3" << endl;

    return 0;
}
