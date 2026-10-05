// Set 4 - Q5: The Number Guessing Game
// MISSION
// Store a secret number. Ask the user to guess it.
// - If guess is smaller -> "Try Higher"
// - If guess is greater -> "Try Lower"
// - If correct -> "Correct"
//
// CHALLENGE: Use goto to repeat the guessing process until the user finds the secret
// number.
// FLOW TO DISCOVER: GUESS -> COMPARE -> FEEDBACK -> JUMP BACK -> GUESS AGAIN

#include <iostream>
using namespace std;

int main() {
    const int SECRET = 42;
    int guess;

  ask:
    cout << "Guess the number: ";
    cin >> guess;

    if (guess < SECRET) {
        cout << "Try Higher" << endl;
        goto ask;
    }
    if (guess > SECRET) {
        cout << "Try Lower" << endl;
        goto ask;
    }

    cout << "Correct" << endl;

    return 0;
}
