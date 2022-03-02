#include <iostream>

int main() {

    std::cout << "Welcome to box Calculus, please enter: length width height" << std::endl;

    double l {};
    double w {};
    double h {};

    std::cin >> l >> w >> h;

    double base_area = w * l;
    double volume = base_area * h;

    std::cout << "Volume is: " << volume << std::endl;

    return 0;
}