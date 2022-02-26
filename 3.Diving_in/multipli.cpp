#include <iostream>

int multipli(int x, int y) { // (parametres)

    int resultat = x * y;
    return resultat;
}

int main() {

    int nombre1 = 9;
    int nombre2 = 11;

    int sum = nombre1 + nombre2;
    std::cout << "Sum: " << sum << std::endl;

    sum = multipli(2,9); // (arguments)
    std::cout << "Sum: " << sum << std::endl; // sum = 18
}