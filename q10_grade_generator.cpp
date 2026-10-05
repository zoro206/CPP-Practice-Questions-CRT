// Set 2 - Q10: Automatic Grade Generator
// In a school examination, grades are awarded: Above 90 -> A, Above 75 -> B, Above 50 ->
// C, otherwise Fail. Generate the grade automatically.
//
// INPUT: Marks
// EXPECTED OUTPUT: Grade A / B / C / Fail

#include <iostream>
using namespace std;

int main() {
    double marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks > 90)
        cout << "Grade A" << endl;
    else if (marks > 75)
        cout << "Grade B" << endl;
    else if (marks > 50)
        cout << "Grade C" << endl;
    else
        cout << "Fail" << endl;

    return 0;
}
