#include "task_05.h"

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include "io_utils.h"

namespace lab2 {

void RunTask05() {
  std::cout << "\nЗадание 5.7. Ноль перед последним совпадением\n";
  int n = ReadSize("Размер V (четный)", 2, 2);
  if (n < 0) return;
  std::cout << "Введите V: ";
  const auto input = ReadNumbers(n);
  std::vector<int> v(input.begin(), input.end());

  auto match = std::find_first_of(v.rbegin() + n / 2, v.rend(),
                                  v.begin() + n / 2, v.end());
  if (match != v.rend()) {
  const int first_element = v[0];
  v.insert(std::prev(match.base()), first_element);
  }
  std::cout << "V: ";
  Print(v);
}

}  
