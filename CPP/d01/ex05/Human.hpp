#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>

class Human
{
public:
  std::string identify();
  Brain getBrain(void);

private:
  Brain b;
};

#endif
