#include "contact.hpp"
#include <iostream>
#include <string>

void contact::set_values()
{// initalize contact
  std::cout << "First Name: ";
  std::getline(std::cin, c_FirstName);
  std::cout << "Last Name: ";
  std::getline(std::cin, c_LastName);
  std::cout << "Nickname: ";
  std::getline(std::cin, c_Nickname);
  std::cout << "Login: ";
  std::getline(std::cin, c_Login);
  std::cout << "Postal Address: ";
  std::getline(std::cin, c_PostalAddress);
  std::cout << "Email: ";
  std::getline(std::cin, c_Email);
  std::cout << "Phone Number: ";
  std::getline(std::cin, c_PhoneNumber);
  std::cout << "Birthday Date: ";
  std::getline(std::cin, c_BirthdayDate);
  std::cout << "Favourite Meal: ";
  std::getline(std::cin, c_FavouriteMeal);
  std::cout << "Underwear Color: ";
  std::getline(std::cin, c_UnderwearColor);
  std::cout << "DarkestSecret: ";
  std::getline(std::cin, c_DarkestSecret);
}

static void cprint_align(std::string entry)
{ // align entry to the right of the column and truncate if len(entry) > 10
  size_t len;

  len = entry.size();
  if (len > 10)
  {
    std::string first_nine = entry.substr(0, 9);
    std::cout << first_nine << '.';
  }
  else if (len > 0)
  {
    for (size_t i = 0; i < 10 - len; i++)
      std::cout << " ";
    std::cout << entry;
  }
  else if (len == 0)
    std::cout << entry;
}

void contact::cprint_brief(int index)
{ // print an overview of a contact
  std::cout << "    " << index << "   ";
  cprint_align(c_Nickname);
  cprint_align(c_FirstName);
  std::cout << "   ";
  cprint_align(c_LastName);
  std::cout << "   ";
  std::cout << '\n';
}

void contact::cprint(void)
{ // outputs contact's details
  std::cout << "First name: " << c_FirstName << '\n';
  std::cout << "Last name: " << c_LastName << '\n';
  std::cout << "Nick name: " << c_Nickname << '\n';
  std::cout << "Login: " << c_Login << '\n';
  std::cout << "Postal address: " << c_PostalAddress << '\n';
  std::cout << "Email: " << c_Email << '\n';
  std::cout << "Phone number: " << c_PhoneNumber << '\n';
  std::cout << "Birthday date: " << c_BirthdayDate << '\n';
  std::cout << "Favourite meal: " << c_FavouriteMeal << '\n';
  std::cout << "Underwear color: " <<  c_UnderwearColor << '\n';
  std::cout << "Darkest secret: " << c_DarkestSecret << '\n';
}
