#include "Human.hpp"
#include <iostream>

Brain Human::getBrain(void)
{
  return (this->b);
}

std::string Human::identify(void)
{
  return (this->b.identify());
}
