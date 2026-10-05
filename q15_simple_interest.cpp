// Set 1 - Q15: Simple interest
// Ravi deposits some money in a bank for a fixed period of time. The bank offers a certain
// rate of simple interest every year. Ravi wants to know how much interest he will earn
// after the given time period. Write a code to calculate the simple interest.

#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;
    cout << "Enter principal amount, rate of interest (% per year) and time (years): ";
    cin >> principal >> rate >> time;

    double interest = (principal * rate * time) / 100;
    cout << "Simple Interest = " << interest << endl;

    return 0;
}
