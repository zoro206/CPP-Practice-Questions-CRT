// Set 1 - Q16: Student result
// A school wants to prepare the result of a student based on marks obtained in five
// subjects. The principal asks the computer operator to calculate the total marks, average
// marks, and percentage of the student. Write a code to perform these calculations.

#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    cout << "Enter marks of 5 subjects (out of 100 each): ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    int total = m1 + m2 + m3 + m4 + m5;
    double average = total / 5.0;
    double percentage = (total / 500.0) * 100;

    cout << "Total marks = " << total << endl;
    cout << "Average marks = " << average << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}
