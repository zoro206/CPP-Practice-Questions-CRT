// Set 2 - Q8: Vowel or Consonant
// A language learning app asks users to enter a character and tells whether it is a vowel
// or a consonant.
//
// INPUT: One alphabet character
// EXPECTED OUTPUT: Vowel / Consonant

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet character: ";
    cin >> ch;

    ch = tolower(ch);   // so that both 'A' and 'a' work

    if (ch < 'a' || ch > 'z')
        cout << "Not an alphabet" << endl;
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "Vowel" << endl;
    else
        cout << "Consonant" << endl;

    return 0;
}
