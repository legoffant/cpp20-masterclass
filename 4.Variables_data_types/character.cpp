#include <iostream>

int main() {

    char character1 {'A'};
    char character2 {'B'};
    char character3 {'C'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;

    // One byte in memory 2⁸ = 256

    char value {65};
    std::cout << "Value: " << value << std::endl;
    std::cout << "value(int)" << static_cast<int>(value) << std::endl;

    return 0;

}