// Set 1 - Q1: Rectangle garden
// A farmer wants to put a fence around his rectangular garden and also plant grass inside
// it. Write a code to calculate the total area to be covered with grass and the total
// length of fencing required for the garden.

#include <iostream>
using namespace std;

int main() {
    double length, breadth;
    cout << "Enter length and breadth of the garden: ";
    cin >> length >> breadth;

    cout << "Area to be covered with grass = " << length * breadth << endl;
    cout << "Length of fencing required = " << 2 * (length + breadth) << endl;

    return 0;
}
