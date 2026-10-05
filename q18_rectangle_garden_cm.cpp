// Set 1 - Q18: Rectangle garden (input in cm, output in m and inch)
// A farmer wants to put a fence around his rectangular garden and also plant grass inside
// it. Write a code to calculate the total area to be covered with grass and the total
// length of fencing required for the garden.
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

    double length, breadth;
    cout << "Enter length and breadth of the garden (in cm): ";
    cin >> length >> breadth;

    double areaCm = length * breadth;   // result in cm^2
    cout << "Area to be covered with grass: " << areaCm / (CM_PER_M * CM_PER_M) << " m^2, " << areaCm / (CM_PER_INCH * CM_PER_INCH) << " inch^2" << endl;
    double fenceCm = 2 * (length + breadth);   // result in cm
    cout << "Length of fencing required: " << fenceCm / (CM_PER_M) << " m, " << fenceCm / (CM_PER_INCH) << " inch" << endl;

    return 0;
}
