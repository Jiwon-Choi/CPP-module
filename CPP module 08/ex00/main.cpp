#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void) {
  std::vector<int> intVec;
  for (int i = 0; i < 5; i++)
    intVec.push_back(i);
  try {
    std::vector<int>::iterator it;
    it = easyfind(intVec, 3);
    std::cout << *it << std::endl;
    it = easyfind(intVec, 10);
    std::cout << *it << std::endl;
  } catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }
  return (0);
}
