// Set 2 - Q4: Even or Odd
// A teacher asked students to arrange numbers into two groups: even and odd. Identify
// whether a given number is even or odd.
//
// INPUT: Integer
// EXPECTED OUTPUT: Even / Odd

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    return 0;
}
