// Set 4 - Q8: Digital Sum
// PROBLEM
// Accept a number and repeatedly calculate the sum of its digits until a single-digit
// number remains.
//
// WORKING EXAMPLE
// Input: 9875
// 9 + 8 + 7 + 5 = 29
// 2 + 9 = 11
// 1 + 1 = 2
// Output: 2
//
// CHALLENGE: Use goto for the repetition. Think about the digit-processing step and the
// repeated reduction until only one digit remains.
// FINAL THINK: What should happen when the current number still has more than one digit?

#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cout << "Enter a number: ";
    cin >> n;

  reduce:
    if (n < 10)
        goto done;

    sum = 0;

  digits:
    if (n > 0) {
        sum += n % 10;   // take the last digit
        n /= 10;         // remove the last digit
        goto digits;
    }

    n = sum;             // still more than one digit? repeat
    goto reduce;

  done:
    cout << "Digital Sum = " << n << endl;

    return 0;
}
