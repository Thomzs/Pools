#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
public:
  HumanB(std::string name);
  void setWeapon(Weapon &w);
  void attack();

private:
  std::string ha_name;
  Weapon*      weaponB;
};

#endif
