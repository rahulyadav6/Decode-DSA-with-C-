#include <iostream>

using namespace std;

int main() {
    char char1, char2;

    cout << "Enter the first character: ";
    cin >> char1;
    cout << "Enter the second character: ";
    cin >> char2;

    int ascii_diff = abs(int(char1) - int(char2));

    cout << "The difference between the ASCII values of '" << char1 << "' and '" << char2 << "' is: " << ascii_diff << endl;

    return 0;
}
