#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cout << "Enter marks for student A: ";
    cin >> A;
    cout << "Enter marks for student B: ";
    cin >> B;
    cout << "Enter marks for student C: ";
    cin >> C;

    if (A <= B && A <= C) {
        cout << "'A' has the least marks." << endl;
    } else if (B <= A && B <= C) {
        cout << "'B' has the least marks." << endl;
    } else {
        cout << "'C' has the least marks." << endl;
    }

    return 0;
}
