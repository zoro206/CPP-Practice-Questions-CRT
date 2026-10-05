// Set 2 - Q15: Character Classifier
// A computer training institute developed a typing practice system. Identify whether the
// entered character is uppercase, lowercase, digit, or special symbol.
//
// INPUT: One character
// EXPECTED OUTPUT: Uppercase / Lowercase / Digit / Special

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase" << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase" << endl;
    else if (ch >= '0' && ch <= '9')
        cout << "Digit" << endl;
    else
        cout << "Special" << endl;

    return 0;
}
