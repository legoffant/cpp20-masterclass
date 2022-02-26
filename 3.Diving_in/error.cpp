#include <iostream>

int main() {

    //Compile time error
    std::cout << "Hello" << std::endl

    //Run time error
    double value = 7/0;
    std::cout << value << std::endl;
}