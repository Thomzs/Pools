#ifndef BRAIN_HPP
# define BRAIN_HPP


# include <iostream>
# include <sstream>

class Brain
{
public:
  Brain(void);
  void getAddress(void);
  std::string identify();

private:
  std::string address;
};

#endif
