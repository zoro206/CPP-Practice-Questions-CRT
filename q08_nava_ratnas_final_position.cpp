// Set 3 - Q8: King Vikramaditya's Nava Ratnas - Final Position
// Varahamihira, one of King Vikramaditya's nava ratnas (nine gems), was talking with
// Amarasimha, author of the Sanskrit thesaurus Amarakosha. Amarasimha wanted to know the
// final position of a person who starts from the origin (0, 0) and travels per the
// following scheme.
//
// SCHEME
// - He first turns and travels 10 units of distance.
// - His second turn is upward for 20 units.
// - Third turn is to the left for 30 units.
// - Fourth turn is downward for 40 units.
// - Fifth turn is to the right (again) for 50 units.
// - And thus he travels, every time increasing the travel distance by 10 units.
//
// INPUT: One integer N representing the number of turns/travel movements.
// EXPECTED OUTPUT: Print the final X and Y coordinates after N movements.
//
// TEST CASES
// - Input: 3 -> Expected Output: -20 20
// - Input: 4 -> Expected Output: -20 -20
// - Input: 5 -> Expected Output: 30 -20
// - Input: 7 -> Expected Output: 90 -20
//
// INPUT:
// EXPECTED OUTPUT:

#include <iostream>
using namespace std;

int main() {
    // Directions repeat every 4 moves: right, up, left, down. Distance of move i = 10 * i.
    // NOTE: Test cases 1 to 3 match this logic. Test case 4 in the sheet (N = 7 -> 90 -20)
    // does not match the scheme: by the scheme, N = 7 gives -40 40. Check this with your sir.
    int n, x = 0, y = 0;
    cout << "Enter number of movements: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int distance = i * 10;
        switch (i % 4) {
            case 1: x += distance; break;   // right
            case 2: y += distance; break;   // up
            case 3: x -= distance; break;   // left
            case 0: y -= distance; break;   // down
        }
    }

    cout << x << " " << y << endl;

    return 0;
}
