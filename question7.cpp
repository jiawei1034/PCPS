#include <iostream>
using namespace std;

void wholeSaler() {
    float amount, total;
    cout << "Amount: ";
    cin >> amount;

    if (amount < 100) {
        total = amount - amount*0.02;
        cout << "Total: $" << total;
    }

    else if (amount >= 100 && amount < 500) {
             total = amount - amount*0.05;
             cout << "Total: $" << total;
    }
    
    else if (amount >= 500) {
             total = amount - amount*0.10;
             cout << "Total: $" << total;
    }

    else {
        cout << "Error !";
    }
}

void retailBuyer() {
    float amount, total;
    cout << "Amount: ";
    cin >> amount;
    total = amount * 1.06;
    cout << "Total: $" << total;
}

int main() {
    int customer;
    cout << "1) Wholesaler \n";
    cout << "2) Retail Buyer \n\n";
    cout << "Type a number: ";
    cin >> customer;

    if (customer == 1) {
        wholeSaler();
    }
    else {
        retailBuyer();
    }
    return 0;
}