#ifndef LAB2_TASK_03_H_
#define LAB2_TASK_03_H_

#include <iostream>
#include <vector>
#include "io_utils.h"

namespace lab2 {

inline void RunTask03() {
  std::cout << "\nЗадание 3.2. Удалить три средних элемента\n";
  int n = ReadSize("Размер V (нечетный, >= 5)", 5, 1, true);
  if (n < 0) return;
  std::cout << "Введите V: ";
  const auto input = ReadNumbers(n);
  std::vector<int> v(input.begin(), input.end());
  v.erase(v.begin() + n / 2 - 1, v.begin() + n / 2 + 2);
  std::cout << "V: ";
  Print(v);
}

}  
#endif  
