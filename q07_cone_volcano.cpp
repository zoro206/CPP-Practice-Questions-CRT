// Set 1 - Q7: Cone volcano volume
// During a science exhibition, students build a cone-shaped model volcano. They need to
// find the volume of the volcano model to know how much material it can contain. Write a
// code to calculate the volume of the cone.

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double radius, height;
    cout << "Enter radius and height of the cone: ";
    cin >> radius >> height;

    cout << "Volume = " << (1.0 / 3.0) * PI * radius * radius * height << endl;

    return 0;
}
