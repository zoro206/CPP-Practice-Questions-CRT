// Set 2 - Q13: Triangle Type
// A construction company wants to identify the type of triangular park based on three side
// lengths. Determine whether it is equilateral, isosceles, or scalene.
//
// INPUT: Three sides
// EXPECTED OUTPUT: Triangle type

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
        cout << "Not a valid triangle" << endl;
    else if (a == b && b == c)
        cout << "Equilateral" << endl;
    else if (a == b || b == c || a == c)
        cout << "Isosceles" << endl;
    else
        cout << "Scalene" << endl;

    return 0;
}
