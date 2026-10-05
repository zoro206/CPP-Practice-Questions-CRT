// Set 2 - Q3: Voting Eligibility
// During elections, only people aged 18 years or above are allowed to vote. Check whether
// a person is eligible to vote.
//
// INPUT: Age
// EXPECTED OUTPUT: Eligible / Not eligible

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 18)
        cout << "Eligible" << endl;
    else
        cout << "Not eligible" << endl;

    return 0;
}
