#include <iostream>
using namespace std;

bool areCollinear(int x1, int y1, int x2, int y2, int x3, int y3) {
    return (y2 - y1) * (x3 - x1) == (y3 - y1) * (x2 - x1);
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter coordinates for point 1 (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates for point 2 (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates for point 3 (x3, y3): ";
    cin >> x3 >> y3;

    if (areCollinear(x1, y1, x2, y2, x3, y3)) {
        cout << "All 3 points lie on the same line." << endl;
    } else {
        cout << "The points do not lie on the same line." << endl;
    }

    return 0;
}
