// Set 4 - Q6: Secret Vault Password
// MISSION
// A secret vault has a 4-digit password stored in the program. Ask the user to enter the
// password.
// - Wrong password -> print "Wrong Password"
// - Allow the user to try again using goto.
// - Correct password -> print "Vault Opened".
// - If the user makes 3 wrong attempts, print "Access Denied" and terminate.
//
// CHALLENGE: Use goto to control the retry mechanism.
// THINK: Where should control jump after a wrong attempt? What variable will track the
// number of failed attempts?

#include <iostream>
using namespace std;

int main() {
    const int PASSWORD = 1234;
    int entered, attempts = 0;

  retry:
    cout << "Enter 4-digit password: ";
    cin >> entered;

    if (entered == PASSWORD) {
        cout << "Vault Opened" << endl;
        goto finish;
    }

    attempts++;
    cout << "Wrong Password" << endl;

    if (attempts == 3) {
        cout << "Access Denied" << endl;
        goto finish;
    }
    goto retry;

  finish:
    cout << "Program ended." << endl;

    return 0;
}
