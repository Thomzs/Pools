#include <iostream>
#include "zombie.hpp"

 void zombie::announce(void)
 {
    std::cout << name << ' ' << '('
              << type << ')' << "Braiinnss\n";
 }
