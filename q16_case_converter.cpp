// Set 2 - Q16: Case Converter
// A text editor allows users to change character case. Accept a character and convert
// uppercase to lowercase and lowercase to uppercase.
//
// INPUT: One character
// EXPECTED OUTPUT: Converted character

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "Converted character: " << char(ch + 32) << endl;   // 'A' + 32 = 'a'
    else if (ch >= 'a' && ch <= 'z')
        cout << "Converted character: " << char(ch - 32) << endl;
    else
        cout << "Not an alphabet, unchanged: " << ch << endl;

    return 0;
}
