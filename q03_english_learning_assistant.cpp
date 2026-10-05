// Set 3 - Q3: The English Learning Assistant
// The program receives one character. If it is a vowel, report "Vowel". If it is an
// alphabet but not a vowel, report "Consonant". Any non-alphabet character should be
// reported as invalid.
//
// INPUT: One character. Uppercase and lowercase vowels should be considered.
// EXPECTED OUTPUT: Vowel / Consonant / Invalid character.
// Example: e -> Vowel

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (tolower(ch)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel" << endl;
            break;
        default:
            if (isalpha(ch))
                cout << "Consonant" << endl;
            else
                cout << "Invalid character" << endl;
    }

    return 0;
}
