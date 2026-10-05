// Set 3 - Q2: The Pocket Calculator
// The calculator receives two numbers and an arithmetic operator. It must perform the
// selected operation: addition, subtraction, multiplication, or division. Unsupported
// operators should be handled gracefully.
//
// INPUT: Two numbers + one operator (+, -, *, /).
// EXPECTED OUTPUT: Display the result of the selected operation, or an invalid-operator
// message.
// Example: 25, 5, / -> 5

#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter two numbers and an operator (+, -, *, /): ";
    cin >> a >> b >> op;

    switch (op) {
        case '+':
            cout << "Result = " << a + b << endl;
            break;
        case '-':
            cout << "Result = " << a - b << endl;
            break;
        case '*':
            cout << "Result = " << a * b << endl;
            break;
        case '/':
            if (b == 0)
                cout << "Error: division by zero" << endl;
            else
                cout << "Result = " << a / b << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
