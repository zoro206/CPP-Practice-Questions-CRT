// Set 1 - Q4: Right triangle board
// A carpenter is making a right-angled triangular wooden board for a project. He needs to
// know the area of the board to estimate the amount of paint required. Write a code to
// calculate the area of the right-angled triangle.

#include <iostream>
using namespace std;

int main() {
    double base, height;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;

    cout << "Area = " << 0.5 * base * height << endl;

    return 0;
}
