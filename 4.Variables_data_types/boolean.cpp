#include <iostream>

int main() {

    bool light_blue {true};
    bool light_green {false};

    if(light_blue == true) {
        std::cout << "The light is blue" << "\n";

    } else {
        std::cout << "No light" << "\n";

    }

    //Sizeof()
    std::cout << "sizeof(bool)" << sizeof(bool) << std::endl;

    // true -> 1
    // false -> 0
    // force to use true or false std::boolalpha;
    std::cout << std::boolalpha;
    std::cout << "Valeur de light_green: " << light_green << std::endl;

    return 0;
}