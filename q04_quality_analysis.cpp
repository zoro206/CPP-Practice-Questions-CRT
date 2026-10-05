// Set 4 - Q4: The Quality Analysis System
// ANALYTICAL UPGRADE
// The factory wants more detailed information about its production readings. For every
// non-zero production quantity, determine whether the quantity is even or odd.
//
// AT THE END OF THE SESSION, DISPLAY
// - Sum of all even quantities
// - Sum of all odd quantities
// - Number of even quantities
// - Number of odd quantities
// - The operator enters 0 to finish the session.
//
// EXAMPLE
// Input: 10 -> 15 -> 20 -> 7 -> 8 -> 0
// Even Count = 3
// Odd Count = 2
// Even Sum = 38
// Odd Sum = 22
//
// THINK: When should the even/odd counter change? When should the sum change? Should 0
// participate in the calculation?

#include <iostream>
using namespace std;

int main() {
    int quantity, evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;

  start:
    cout << "Enter production quantity (0 to stop): ";
    cin >> quantity;

    if (quantity == 0)
        goto stop;

    if (quantity % 2 == 0) {
        evenCount++;
        evenSum += quantity;
    } else {
        oddCount++;
        oddSum += quantity;
    }
    goto start;

  stop:
    cout << "Even Count = " << evenCount << endl;
    cout << "Odd Count = " << oddCount << endl;
    cout << "Even Sum = " << evenSum << endl;
    cout << "Odd Sum = " << oddSum << endl;

    return 0;
}
