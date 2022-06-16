#include "Span.hpp"

int main(void) {
  try {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.printVector();
    std::cout << sp.shortestSpan() << ' ' << sp.longestSpan() << '\n';
    sp.addNumber(11);
  } catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "--------------------------------------\n";

  try {
    std::vector<int> vec;
    for (int i = 0; i < 5; i++)
      vec.push_back(i);
    Span sp = Span(5);
    sp.addNumber(vec.begin(), vec.end());
    sp.printVector();
    std::cout << sp.shortestSpan() << ' ' << sp.longestSpan() << '\n';
    sp.addNumber(vec.begin(), vec.end());
  } catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "--------------------------------------\n";

  try {
    Span sp = Span(5);
    std::cout << sp.shortestSpan() << std::endl;
  } catch (std::exception & e) {
    std::cerr << e.what() << std::endl;
  }
  return (0);
}
