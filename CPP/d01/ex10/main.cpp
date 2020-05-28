#include <string>
#include <iostream>
#include <fstream>
#include <cerrno>
#include <cstring>

#define BUFF_SIZE 1

using namespace std;

static int  ft_cat(const string& arg)
{
  ifstream  file;
  char      *buffer;

  file.open(arg);
  if (file.fail())
  {
    cerr << "cat0nails: " << arg << ": " << strerror(errno) << '\n';
    return (1);
  }
  buffer = new char[BUFF_SIZE + 1];
  while (!file.eof())
  {
    file.read(buffer, BUFF_SIZE);
    buffer[file.gcount()] = '\0';
    cout << buffer;
  }
  file.close();
  delete buffer;
  return (0);
}

int         main(int ac, char **av)
{
  int     index;
  int     ret;
  string  argument;

  index = 1;
  ret = 0;
  if (ac == 1)
  {
    while (getline(cin, argument))
      cout << argument << '\n';
  }
  while (index < ac)
  {
    if (ft_cat((argument = av[index])))
      ret = 1;
    index++;
  }
  return (ret);
}
