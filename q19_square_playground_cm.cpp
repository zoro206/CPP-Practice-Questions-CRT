// Set 1 - Q19: Square playground (input in cm, output in m and inch)
// Riya is designing a square playground for children. She wants to know how much space is
// available for playing and how much boundary wire is needed around the playground. Write
// a code to calculate the area and perimeter of the square playground.
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
    cout << "Enter side of the square playground (in cm): ";
    cin >> side;

    double areaCm = side * side;   // result in cm^2
    cout << "Area: " << areaCm / (CM_PER_M * CM_PER_M) << " m^2, " << areaCm / (CM_PER_INCH * CM_PER_INCH) << " inch^2" << endl;
    double perimeterCm = 4 * side;   // result in cm
    cout << "Perimeter: " << perimeterCm / (CM_PER_M) << " m, " << perimeterCm / (CM_PER_INCH) << " inch" << endl;

    return 0;
}
