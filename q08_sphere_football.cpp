// Set 1 - Q8: Sphere football volume
// A sports company is designing a spherical football. The designer wants to know the
// volume of the football for manufacturing purposes. Write a code to calculate the volume
// of the sphere.

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double radius;
    cout << "Enter radius of the sphere: ";
    cin >> radius;

    cout << "Volume = " << (4.0 / 3.0) * PI * radius * radius * radius << endl;

    return 0;
}
