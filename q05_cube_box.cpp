// Set 1 - Q5: Cube box volume
// A toy company manufactures cube-shaped gift boxes. The manager wants to know how much
// space each box can hold. Write a code to calculate the volume of the cube-shaped box.

#include <iostream>
using namespace std;

int main() {
    double side;
    cout << "Enter side of the cube: ";
    cin >> side;

    cout << "Volume = " << side * side * side << endl;

    return 0;
}
