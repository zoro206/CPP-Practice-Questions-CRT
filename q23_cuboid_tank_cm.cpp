// Set 1 - Q23: Cuboid tank volume (input in cm, output in m and inch)
// A warehouse owner has a cuboid-shaped water tank. He wants to calculate how much water
// the tank can store. Write a code to calculate the volume of the cuboid-shaped tank.
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

    double length, breadth, height;
    cout << "Enter length, breadth and height of the tank (in cm): ";
    cin >> length >> breadth >> height;

    double volumeCm = length * breadth * height;   // result in cm^3
    cout << "Volume: " << volumeCm / (CM_PER_M * CM_PER_M * CM_PER_M) << " m^3, " << volumeCm / (CM_PER_INCH * CM_PER_INCH * CM_PER_INCH) << " inch^3" << endl;

    return 0;
}
