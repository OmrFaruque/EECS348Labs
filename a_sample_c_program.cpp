#include <iostream>
#include <string>
#include <algorithm>

int main() {

  std::string str;
  
  std::cout << "Enter a string: ";
  std::getline(std::cin, str);
  
  // Capitalize the string
  for(auto &c : str) {
    c = toupper(c);
  }

  std::cout << "The capitalized string is: " << str << std::endl;

  // Reverse the string
  std::reverse(str.begin(), str.end());

  std::cout << "The reversed string is: " << str << std::endl;

  return 0;
}