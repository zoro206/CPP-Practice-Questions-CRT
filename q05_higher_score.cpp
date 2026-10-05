// Set 2 - Q5: Higher Score
// Two friends participated in a race and recorded their scores. Find which friend scored
// higher marks.
//
// INPUT: Two scores
// EXPECTED OUTPUT: Friend 1 / Friend 2 / Tie

#include <iostream>
using namespace std;

int main() {
    int score1, score2;
    cout << "Enter scores of Friend 1 and Friend 2: ";
    cin >> score1 >> score2;

    if (score1 > score2)
        cout << "Friend 1" << endl;
    else if (score2 > score1)
        cout << "Friend 2" << endl;
    else
        cout << "Tie" << endl;

    return 0;
}
