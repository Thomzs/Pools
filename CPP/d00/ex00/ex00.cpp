#include <iostream>

int main(int ac, char **av)
{
  int i;
  int j;

  i = 0;
  if (ac < 2)
    std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *\n";
  else
  {
    while (++i <= ac - 1)
    {
      j = -1;
      while (av[i][++j])
      {
        if (av[i][j] >= 'a' && av[i][j] <= 'z')
          std::cout << char(av[i][j] - 32);
        else
          std::cout << av[i][j];
      }
    }
    std::cout << '\n';
  }
  return (0);
}
