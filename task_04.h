#ifndef LAB2_TASK_04_H_
#define LAB2_TASK_04_H_

#include <algorithm>
#include <iostream>
#include <iterator>
#include "io_utils.h"

namespace lab2 {

inline void RunTask04() {
  std::cout << "\nЗадание 4.8. Арифметическая прогрессия\n";
  double a, d;
  std::cout << "A и D: ";
  std::cin >> a >> d;
  int n = ReadSize("Количество членов N", 0);
  if (n < 0) return;
  std::generate_n(std::ostream_iterator<double>(std::cout, " "), n,
                  [value = a, d]() mutable {
                    double current = value;
                    value += d;
                    return current;
                  });
  std::cout << '\n';
}

}  
#endif  
