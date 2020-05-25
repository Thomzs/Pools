#include <iostream>
#include <string>
#include "contact.hpp"
#include <vector>
#include <bits/stdc++.h>
#include <sstream>

std::vector<contact> directory;

static void search_contact()
{ // searching a contact. Displays an overview of contacts then asks for
  // which one to outputs details about.
  size_t choice;
  std::string str;
  size_t size;
  size = directory.size();

  std::cout << "Index" << " | " << "First Name" << " | " << " Last Name"
            << " | " << "  Nickname" << '\n';
  for (size_t i = 0; i < size; i++)
      directory[i].cprint_brief(i + 1);
  std::cin >> str;
  std::istringstream(str) >> choice;
  if (choice && choice <= LIMIT_DIRECTORY)
    directory[choice].cprint();
}

static void add_contact()
{ //adding contact to the directory
  int size;

  size = directory.size();
  if (size < 8)
    directory.push_back(contact());
  directory[size].set_values();
}

int main(void)
{
  std::string  input;

  while (true)
  {
    std::cin >> input;
      std::cin.ignore(INT_MAX, '\n');
    if (input.compare("ADD") == 0)
      add_contact();
    else if (input.compare("SEARCH") == 0)
      search_contact();
    else if (input.compare("EXIT") == 0)
      break ;
  }
  return 0;
}
