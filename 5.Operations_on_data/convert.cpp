#include <iostream>

int main() {

    // Lecture Celsius
    std::cout << "How many °C you want to convert in °F: " << std::endl;
    double var {};
    std::cin >> var;

    double result = (9.0 / 5)* var + 32;

    std::cout << var << " °C -> " << result << " °F." << std::endl;

    return 0;
}