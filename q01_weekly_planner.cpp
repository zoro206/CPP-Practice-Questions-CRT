// Set 3 - Q1: The Weekly Planner
// A school planner accepts a number from 1 to 7. Each number represents one day of the
// week. The system must display the matching day. Any number outside 1-7 should produce
// "Invalid day".
//
// INPUT: One integer: day number (1-7).
// EXPECTED OUTPUT: Display the corresponding day name, or "Invalid day".
// Example: 5 -> Friday

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6: cout << "Saturday" << endl; break;
        case 7: cout << "Sunday" << endl; break;
        default: cout << "Invalid day" << endl;
    }

    return 0;
}
