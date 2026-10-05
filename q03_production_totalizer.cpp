// Set 4 - Q3: The Production Totalizer
// NEW REQUIREMENT
// The factory now wants to calculate the total production quantity recorded during the
// session.
//
// MODIFY THE PREVIOUS SYSTEM
// - Accept production quantities continuously.
// - Display each entered quantity.
// - Add every non-zero quantity to a running total.
// - 0 indicates the end of the session.
// - Finally display the total production quantity.
//
// EXAMPLE
// Input: 10 -> 25 -> 15 -> 20 -> 0
// Output: Total Production = 70
//
// THINK: Which variable should hold the running total? At what point should it be updated?

#include <iostream>
using namespace std;

int main() {
    int quantity, total = 0;

  start:
    cout << "Enter production quantity (0 to stop): ";
    cin >> quantity;

    if (quantity == 0)
        goto stop;

    cout << "Entered quantity: " << quantity << endl;
    total += quantity;
    goto start;

  stop:
    cout << "Total Production = " << total << endl;

    return 0;
}
