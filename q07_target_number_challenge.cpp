// Set 4 - Q7: Target Number Challenge
// MISSION
// Store a secret number between 1 and 100. The user gets 5 attempts to find it.
// - Guess smaller -> "Target is Higher"
// - Guess greater -> "Target is Lower"
// - Correct -> "Target Hit!"
// - If all 5 attempts are used -> "Target Missed!"
//
// TWIST: Stop immediately when the correct number is guessed.
// CHALLENGE: Use goto to repeat the guessing process while controlling the maximum of 5
// attempts.

#include <iostream>
using namespace std;

int main() {
    const int TARGET = 57;
    int guess, attempts = 0;

  again:
    if (attempts == 5) {
        cout << "Target Missed!" << endl;
        goto finish;
    }

    cout << "Attempt " << attempts + 1 << " of 5. Enter your guess: ";
    cin >> guess;
    attempts++;

    if (guess == TARGET) {
        cout << "Target Hit!" << endl;
        goto finish;
    }

    if (guess < TARGET)
        cout << "Target is Higher" << endl;
    else
        cout << "Target is Lower" << endl;
    goto again;

  finish:
    cout << "Game over." << endl;

    return 0;
}
