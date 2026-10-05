// Set 2 - Q7: Highest of Three
// Three cricket players scored different runs in a match. Find which player scored the
// highest runs among the three.
//
// INPUT: Three scores
// EXPECTED OUTPUT: Highest scorer

#include <iostream>
using namespace std;

int main() {
    int p1, p2, p3;
    cout << "Enter runs scored by Player 1, Player 2 and Player 3: ";
    cin >> p1 >> p2 >> p3;

    if (p1 >= p2 && p1 >= p3)
        cout << "Player 1 scored the highest: " << p1 << endl;
    else if (p2 >= p1 && p2 >= p3)
        cout << "Player 2 scored the highest: " << p2 << endl;
    else
        cout << "Player 3 scored the highest: " << p3 << endl;

    return 0;
}
