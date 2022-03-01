#include <iostream>

int main() {
    // auto détermine automatiquement le type
    auto var1 {12}; 
    auto var2 {24.0};
    auto var3 {3.14f};
    auto var4 {300000.0L};
    auto var5 {'e'};

    //int modifier suffixes
    auto var6 {123u}; // unsigned
    auto var7 {123ul}; // unsigned long
    auto var8 {123LL}; // long long

    std::cout << "Occupation en mémoire(bytes): " << sizeof(var1) << std::endl;
    std::cout << "Occupation en mémoire(bytes): " << sizeof(var2) << std::endl;
    std::cout << "Occupation en mémoire(bytes): " << sizeof(var3) << std::endl;
    std::cout << "Occupation en mémoire(bytes): " << sizeof(var4) << std::endl;
    std::cout << "Occupation en mémoire(bytes): " << sizeof(var5) << std::endl;
    std::cout << "Occupation en mémoire(bytes): " << sizeof(var6) << std::endl;
    std::cout << "Occupation en mémoire(bytes): " << sizeof(var7) << std::endl;
    std::cout << "Occupation en mémoire(bytes): " << sizeof(var8) << std::endl;

}