#ifndef LAB2_TASK_06_H_
#define LAB2_TASK_06_H_

#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include "io_utils.h"

namespace lab2 {

inline void RunTask06() {
  std::cout << "\nЗадание 6.7. Копии пяти элементов со сдвигом\n";
  int k = ReadSize("Сдвиг K (1..4)", 1);
  while (k > 4) k = ReadSize("Сдвиг K (1..4)", 1);
  if (k < 0) return;
  int n = ReadSize("Размер L (>= 10)", 10);
  if (n < 0) return;
  std::cout << "Введите L: ";
  const auto input = ReadNumbers(n);
  std::list<int> values(input.begin(), input.end());

  const auto first_begin = values.begin();
  auto first_end = first_begin;
  std::advance(first_end, 5);
  auto first_middle = first_begin;
  std::advance(first_middle, 5 - k);
  auto last_begin = values.end();
  std::advance(last_begin, -5);
  auto last_middle = last_begin;
  std::advance(last_middle, k);

  std::rotate_copy(last_begin, last_middle, values.end(),
                   std::inserter(values, values.begin()));
  std::rotate_copy(first_begin, first_middle, first_end,
                   std::back_inserter(values));
  std::cout << "L: ";
  Print(values);
}

}  
#endif  
