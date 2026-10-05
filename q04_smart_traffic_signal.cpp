// Set 3 - Q4: Smart Traffic Signal
// The system receives a traffic signal character: R means Stop, Y means Wait, and G means
// Go. Lowercase versions should also be accepted. Any other character is invalid.
//
// INPUT: One character: R/Y/G (or r/y/g).
// EXPECTED OUTPUT: Display Stop, Wait, Go, or Invalid signal.
// Example: R -> Stop

#include <iostream>
using namespace std;

int main() {
    char signal;
    cout << "Enter signal (R/Y/G): ";
    cin >> signal;

    switch (signal) {
        case 'R':
        case 'r':
            cout << "Stop" << endl;
            break;
        case 'Y':
        case 'y':
            cout << "Wait" << endl;
            break;
        case 'G':
        case 'g':
            cout << "Go" << endl;
            break;
        default:
            cout << "Invalid signal" << endl;
    }

    return 0;
}
