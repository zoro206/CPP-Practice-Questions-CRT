// Set 2 - Q11: Voting + Senior Citizen
// A government office wants to check whether a citizen can vote and whether the citizen is
// also a senior citizen. Classify people based on age.
//
// INPUT: Age
// EXPECTED OUTPUT: Voting status + Senior status

#include <iostream>
using namespace std;

int main() {
    // Assumption: voting age = 18 and above, senior citizen = 60 and above.
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 18)
        cout << "Eligible to vote" << endl;
    else
        cout << "Not eligible to vote" << endl;

    if (age >= 60)
        cout << "Senior citizen" << endl;
    else
        cout << "Not a senior citizen" << endl;

    return 0;
}
