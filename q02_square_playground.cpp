// Set 1 - Q2: Square playground
// Riya is designing a square playground for children. She wants to know how much space is
// available for playing and how much boundary wire is needed around the playground. Write
// a code to calculate the area and perimeter of the square playground.

#include <iostream>
using namespace std;

int main() {
    double side;
    cout << "Enter side of the square playground: ";
    cin >> side;

    cout << "Area = " << side * side << endl;
    cout << "Perimeter = " << 4 * side << endl;

    return 0;
}
