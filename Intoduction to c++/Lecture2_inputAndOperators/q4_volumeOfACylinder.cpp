#include <iostream>
#include <cmath>

using namespace std;

double cylinder_volume(double radius, double height) {
    double volume = M_PI * pow(radius, 2) * height;
    return volume;
}

int main() {
    double radius, height;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    double volume = cylinder_volume(radius, height);

    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
