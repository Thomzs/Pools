#include <iostream>
#include <fstream>
#include <string>

#define BUFF_SIZE 100

using namespace std;

string  ft_read(ifstream& myfile)
{
    char    *buffer;
    string  text;

    buffer = new char[BUFF_SIZE];
    while (!myfile.eof())
    {
      myfile.read(buffer, BUFF_SIZE);
      text.append(buffer, myfile.gcount());
    }
    delete buffer;
    myfile.close();
    return (text);
}

string  ft_sub(string& text, const string& str1, const string& str2)
{
  size_t  index;

  index = 0;
  while ((index = text.find(str1, index)) != string::npos)
    text.replace(index, str1.length(), str2);
  return (text);
}

int     ft_push(string &text, string& file)
{
    ofstream myfile;

    file.append(".replace");
    myfile.open(file, ios::trunc);
    if (myfile.is_open())
    {
      myfile << text;
      myfile.close();
      return (0);
    }
    return (1);
}

int     ft_replace(string& file, const string& str1, const string& str2)
{
  string    line;
  string    text;
  ifstream  myfile(file);

  if (myfile.is_open())
  {
    text = ft_read(myfile);
    text = ft_sub(text, str1, str2);
    return(ft_push(text, file));
  }
  else
  {
    cout << "Unable to open file";
    return (1);
  }
}

int     main(int ac, char **av)
{
  if (ac == 4)
  {
    string file(av[1]);
    const string str1(av[2]);
    const string str2(av[3]);
    return(ft_replace(file, str1, str2));
  }
  return(0);
}
