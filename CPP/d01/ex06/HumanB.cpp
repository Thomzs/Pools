#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
  ha_name = name;
  return ;
}

void HumanB::setWeapon(Weapon &w)
{
  weaponB = &w;
  return ;
}

void HumanB::attack(void)
{
  std::cout << ha_name << " attacks with his " << this->weaponB->getType() << '\n';
  return ;
}
