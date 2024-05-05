#include <iostream>

using namespace std;

int main() {
    float side1, side2, side3;
    cout << "Enter side1: ";
    cin >> side1;
    cout << "Enter side2: ";
    cin >> side2;
    cout << "Enter side3: ";
    cin >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "This is an Equilateral triangle." << endl;
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "This is an Isosceles triangle." << endl;
    } else {
        cout << "This is a Scalene triangle." << endl;
    }

    return 0;
}
