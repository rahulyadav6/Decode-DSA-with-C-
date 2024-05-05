#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes500 = 0, notes100 = 0, notes50 = 0, notes10 = 0;

    switch (amount / 500) {
        case 1:
            notes500++;
            amount -= 500;
            break;
        default:
            break;
    }

    switch (amount / 100) {
        case 1:
            notes100++;
            amount -= 100;
            break;
        default:
            break;
    }

    switch (amount / 50) {
        case 1:
            notes50++;
            amount -= 50;
            break;
        default:
            break;
    }

    switch (amount / 10) {
        case 1:
            notes10++;
            amount -= 10;
            break;
        default:
            break;
    }

    cout << "Notes of \"500\" = " << notes500 << " and notes of \"100\" = " << notes100 << " and notes of \"50\" = " << notes50 << " and notes of \"10\" = " << notes10 << endl;

    return 0;
}
