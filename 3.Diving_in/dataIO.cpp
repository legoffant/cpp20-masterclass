/**
 * @file dataIO.cpp
 * @author Anthony Le Goff
 * @brief Utilisation des sorties et entrées standard
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022 <Anthony le Goff>
 * 
 *    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; see the file COPYING. If not, write to the
    Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

 * 
 */

#include <iostream>

int main() {
    // Print data
    std::cout << "Plus de data" << std::endl;

    // Afficher une variable
    int age {32};
    std::cout << "Age: " << age << std::endl;

    // Afficher un message d'erreur ou de logs
    std::cerr << "Error find please retry" << std::endl;
    std::clog << "Data processing awaiting 1/30" << std::endl;

    // Demander l'age et le nom
    int age1 { };
    std::string nom { };

    std::cout << "Quel est votre prénom et age: " << std::endl;
    std::cin >> nom >> age1;

    std::cout << " prénom: " << nom << std::endl;
    std::cout << " age: " << age1 << " ans." << std::endl;

    // Demander la région d'habitation
    std::string region { };
    
    std::cout << "Quel est le nom de votre région(inclus espace): " << std::endl;
    std::getline(std::cin, region);
    
    std::cout << "Vous habitez en: " << region << "\n";

    return 0;
}