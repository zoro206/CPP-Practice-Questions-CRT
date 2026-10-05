// Set 1 - Q3: Circle fountain
// A park has a circular fountain in the center. The gardener wants to know the area
// covered by the fountain and the distance around its boundary for decoration lights.
// Write a code to calculate the area and circumference of the circular fountain.

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double radius;
    cout << "Enter radius of the fountain: ";
    cin >> radius;

    cout << "Area = " << PI * radius * radius << endl;
    cout << "Circumference = " << 2 * PI * radius << endl;

    return 0;
}
