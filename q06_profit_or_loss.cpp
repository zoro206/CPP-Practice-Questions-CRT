// Set 2 - Q6: Profit or Loss
// A businessman purchased a product at one price and sold it at another price. Determine
// whether he made a profit or suffered a loss.
//
// INPUT: Cost Price, Selling Price
// EXPECTED OUTPUT: Profit / Loss / No Profit No Loss

#include <iostream>
using namespace std;

int main() {
    double costPrice, sellingPrice;
    cout << "Enter cost price and selling price: ";
    cin >> costPrice >> sellingPrice;

    if (sellingPrice > costPrice)
        cout << "Profit" << endl;
    else if (sellingPrice < costPrice)
        cout << "Loss" << endl;
    else
        cout << "No Profit No Loss" << endl;

    return 0;
}
