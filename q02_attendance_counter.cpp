// Set 4 - Q2: The Attendance Counter
// NEW REQUIREMENT
// The factory now wants to know how many machine readings were recorded during a
// monitoring session.
//
// MODIFY THE PREVIOUS SYSTEM
// - Every non-zero number entered by the operator represents one valid reading.
// - Count the number of readings entered.
// - 0 terminates the monitoring session.
// - After termination, display the total number of readings recorded.
//
// EXAMPLE
// Input: 25 -> 18 -> 31 -> 42 -> 0
// Output: Total Readings = 4
//
// CHALLENGE: The terminating 0 should NOT be counted as a reading.

#include <iostream>
using namespace std;

int main() {
    int reading, count = 0;

  start:
    cout << "Enter reading (0 to stop): ";
    cin >> reading;

    if (reading == 0)
        goto stop;

    count++;
    cout << "Recorded reading: " << reading << endl;
    goto start;

  stop:
    cout << "Total Readings = " << count << endl;

    return 0;
}
