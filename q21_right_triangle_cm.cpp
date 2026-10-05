// Set 1 - Q21: Right triangle board (input in cm, output in m and inch)
// A carpenter is making a right-angled triangular wooden board for a project. He needs to
// know the area of the board to estimate the amount of paint required. Write a code to
// calculate the area of the right-angled triangle.
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

    double base, height;
    cout << "Enter base and height of the triangle (in cm): ";
    cin >> base >> height;

    double areaCm = 0.5 * base * height;   // result in cm^2
    cout << "Area: " << areaCm / (CM_PER_M * CM_PER_M) << " m^2, " << areaCm / (CM_PER_INCH * CM_PER_INCH) << " inch^2" << endl;

    return 0;
}
