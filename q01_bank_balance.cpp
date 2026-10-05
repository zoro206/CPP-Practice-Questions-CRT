// Set 2 - Q1: Bank Balance Status
// Rahul checked his bank account balance after a business trip. The balance could be
// positive, negative due to a loan, or exactly zero. Help Rahul identify the status of his
// balance.
//
// INPUT: Balance amount
// EXPECTED OUTPUT: Positive / Negative / Zero

#include <iostream>
using namespace std;

int main() {
    double balance;
    cout << "Enter balance amount: ";
    cin >> balance;

    if (balance > 0)
        cout << "Positive" << endl;
    else if (balance < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;

    return 0;
}
