#include <iostream>

int main() {
    float length, breadth;
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter breadth: ";
    std::cin >> breadth;

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        std::cout << "Area is greater than perimeter." << std::endl;
    } else {
        std::cout << "Perimeter is greater than or equal to area." << std::endl;
    }

    return 0;
}
