#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w) : weaponA(w)
{
  ha_name = name;
  setWeapon(w);
  return ;
}

void HumanA::setWeapon(Weapon w)
{
  weaponA = w;
  return ;
}

void HumanA::attack(void)
{
  std::cout << ha_name << "attacks with his " << this->weaponA.getType() << '\n';
  return ;
}
