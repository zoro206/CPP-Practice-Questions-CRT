// Set 1 - Q6: Cuboid tank volume
// A warehouse owner has a cuboid-shaped water tank. He wants to calculate how much water
// the tank can store. Write a code to calculate the volume of the cuboid-shaped tank.

#include <iostream>
using namespace std;

int main() {
    double length, breadth, height;
    cout << "Enter length, breadth and height of the tank: ";
    cin >> length >> breadth >> height;

    cout << "Volume = " << length * breadth * height << endl;

    return 0;
}
