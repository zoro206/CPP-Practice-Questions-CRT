// Set 2 - Q9: Multiple of 2, 3 or Both
// A mathematics teacher challenges students to identify whether a number is a multiple of
// 2, multiple of 3, multiple of both 2 and 3, or neither.
//
// INPUT: Integer
// EXPECTED OUTPUT: 2 / 3 / Both / Neither

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0)
        cout << "Both" << endl;
    else if (n % 2 == 0)
        cout << "2" << endl;
    else if (n % 3 == 0)
        cout << "3" << endl;
    else
        cout << "Neither" << endl;

    return 0;
}
