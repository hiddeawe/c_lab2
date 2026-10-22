#include "io_utils.h"

#include <iostream>

namespace lab2 {
namespace {

template <typename Iterator>
void PrintRange(Iterator first, Iterator last) {
  for (auto it = first; it != last; ++it) {
    std::cout << *it << ' ';
  }
  std::cout << '\n';
}

} 

int ReadSize(const std::string& name, int minimum, int divisor, bool odd) {
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

std::vector<int> ReadNumbers(int count) {
  std::vector<int> numbers(count);
  for (int& number : numbers) std::cin >> number;
  return numbers;
}

void Print(std::list<int>::const_iterator first,
           std::list<int>::const_iterator last) {
  PrintRange(first, last);
}

void Print(std::list<int>::const_reverse_iterator first,
           std::list<int>::const_reverse_iterator last) {
  PrintRange(first, last);
}

void Print(const std::vector<int>& values) {
  PrintRange(values.begin(), values.end());
}

void Print(const std::deque<int>& values) {
  PrintRange(values.begin(), values.end());
}

void Print(const std::list<int>& values) {
  PrintRange(values.begin(), values.end());
}

void Print(const std::deque<std::string>& values) {
  PrintRange(values.begin(), values.end());
}

}
