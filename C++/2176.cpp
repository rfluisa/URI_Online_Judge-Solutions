//2176	Paridade	Accepted	C++	0.000	17/10/2018 02:08:14
#include <iostream>       // std::cout
#include <string>         // std::string
#include <algorithm> // std::size_t

int main ()
{
  std::string str;
  std::cin >> str;
  std::size_t ones = std::count(str.begin(),str.end(),'1');

  if(ones%2 == 0)
    std::cout << str << "0\n";
  else
    std::cout << str << "1\n";

  return 0;
}