// Set 2 - Q2: Bill Divisibility
// A shopkeeper wants to give a special discount only on bills that are divisible by 5.
// Check whether the entered bill amount is divisible by 5.
//
// INPUT: Bill amount
// EXPECTED OUTPUT: Divisible by 5 / Not divisible

#include <iostream>
using namespace std;

int main() {
    int bill;
    cout << "Enter bill amount: ";
    cin >> bill;

    if (bill % 5 == 0)
        cout << "Divisible by 5" << endl;
    else
        cout << "Not divisible" << endl;

    return 0;
}
