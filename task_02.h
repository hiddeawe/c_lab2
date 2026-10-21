#ifndef LAB2_TASK_02_H_
#define LAB2_TASK_02_H_

#include <deque>
#include <iostream>
#include <iterator>
#include <vector>
#include "io_utils.h"

namespace lab2 {

inline void RunTask02() {
  std::cout << "\nЗадание 2.6. Вставка половин вектора и дека\n";
  int n = ReadSize("Размер V (четный)", 2, 2);
  if (n < 0) return;
  std::cout << "Введите V: ";
  const auto input_v = ReadNumbers(n);
  std::vector<int> v(input_v.begin(), input_v.end());

  int m = ReadSize("Размер D (четный)", 2, 2);
  if (m < 0) return;
  std::cout << "Введите D: ";
  const auto input_d = ReadNumbers(m);
  std::deque<int> d(input_d.begin(), input_d.end());

  v.insert(v.end(), d.begin(), d.begin() + m / 2);
  // Берем вторую половину исходного V, а не добавленные элементы.
  d.insert(d.begin(), std::make_reverse_iterator(v.begin() + n),
           std::make_reverse_iterator(v.begin() + n / 2));
  std::cout << "V: ";
  Print(v);
  std::cout << "D: ";
  Print(d);
}

}  
#endif  
