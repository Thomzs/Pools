#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
public:
  HumanA(std::string name, Weapon& w);
  void setWeapon(Weapon w);
  void attack();

private:
  std::string ha_name;
  Weapon& weaponA;
};

#endif
