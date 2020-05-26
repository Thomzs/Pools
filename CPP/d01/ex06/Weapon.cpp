#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
  setType(type);
  return ;
}

std::string&   Weapon::getType(void)
{
  return (this->w_type);
}

void Weapon::setType(std::string type)
{
  w_type = type;
  return ;
}
