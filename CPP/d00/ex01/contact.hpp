#ifndef CONCACTS_HPP
  # define  CONCACTS_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <thread>
# include <chrono>

# define LIMIT_DIRECTORY 8

class contact
{
//methodes
public:
    void set_values(void);
    void cprint_brief(int index);
    void cprint(void);
//attributs
private:
    std::string c_FirstName;
    std::string c_LastName;
    std::string c_Nickname;
    std::string c_Login;
    std::string c_PostalAddress;
    std::string c_Email;
    std::string c_PhoneNumber;
    std::string c_BirthdayDate;
    std::string c_FavouriteMeal;
    std::string c_UnderwearColor;
    std::string c_DarkestSecret;
};

#endif
