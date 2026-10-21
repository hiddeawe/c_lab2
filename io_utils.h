#ifndef LAB2_IO_UTILS_H_
#define LAB2_IO_UTILS_H_

#include <iostream>
#include <iterator>
#include <string>
#include <vector>

namespace lab2 {

inline int ReadSize(const std::string& name, int minimum = 0,
                    int divisor = 1, bool odd = false) {
  int size;
  do {
    std::cout << name << ": ";
    std::cin >> size;
    if (std::cin.fail()) return -1;
    if (size < minimum || size % divisor != 0 || (odd && size % 2 == 0)) {
      std::cout << "Неверный размер, повторите ввод.\n";
    }
  } while (size < minimum || size % divisor != 0 || (odd && size % 2 == 0));
  return size;
}

inline std::vector<int> ReadNumbers(int count) {
  std::vector<int> numbers(count);
  for (int& number : numbers) std::cin >> number;
  return numbers;
}

template <typename Iterator>
void Print(Iterator first, Iterator last) {
  for (auto it = first; it != last; ++it) std::cout << *it << ' ';
  std::cout << '\n';
}

template <typename Container>
void Print(const Container& container) {
  Print(container.begin(), container.end());
}

}  

#endif  
