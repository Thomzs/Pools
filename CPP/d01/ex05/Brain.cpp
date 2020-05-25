#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
  getAddress();
  return ;
}

void Brain::getAddress(void)
{
  std::stringstream   buff;

    buff << this;
    this->address = buff.str();
    return ;
}

std::string Brain::identify(void)
{
  return (this->address);
}
