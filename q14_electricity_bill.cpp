// Set 2 - Q14: Electricity Bill
// An electricity department charges customers according to different electricity-usage
// slabs. Calculate the total bill based on units consumed.
//
// INPUT: Units consumed + slab rates
// EXPECTED OUTPUT: Total electricity bill

#include <iostream>
using namespace std;

int main() {
    // Slabs used: first 100 units at rate1, next 100 units at rate2, above 200 units at rate3.
    int units;
    double rate1, rate2, rate3, bill;

    cout << "Enter units consumed: ";
    cin >> units;
    cout << "Enter rate per unit for first 100 units, next 100 units, and above 200 units: ";
    cin >> rate1 >> rate2 >> rate3;

    if (units <= 100)
        bill = units * rate1;
    else if (units <= 200)
        bill = 100 * rate1 + (units - 100) * rate2;
    else
        bill = 100 * rate1 + 100 * rate2 + (units - 200) * rate3;

    cout << "Total electricity bill = " << bill << endl;

    return 0;
}
