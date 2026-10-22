#include "task_07.h"

#include <algorithm>
#include <iostream>
#include <vector>
#include "io_utils.h"

namespace lab2 {

void RunTask07() {
  std::cout << "\nЗадание 7.4. Добавить меньшую половину\n";
  int n = ReadSize("Размер V (четный)", 2, 2);
  if (n < 0) return;
  std::cout << "Введите V: ";
  const auto input = ReadNumbers(n);
  std::vector<int> v(input.begin(), input.end());
  v.insert(v.end(), n / 2, 0);
  std::partial_sort_copy(v.begin(), v.begin() + n,
                         v.begin() + n, v.end());
  std::cout << "V: ";
  Print(v);
}

}  