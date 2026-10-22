#include "task_09.h"

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
#include "io_utils.h"

namespace lab2 {

void RunTask09() {
  std::cout << "\nЗадание 9.2. Поиск включений с учетом повторений\n";
  int size = ReadSize("Размер V0", 0);
  if (size < 0) return;
  std::cout << "Введите V0: ";
  const auto input = ReadNumbers(size);
  const std::vector<int> v0(input.begin(), input.end());
  const std::multiset<int> required(v0.begin(), v0.end());
  int n = ReadSize("Количество векторов N (> 0)", 1);
  if (n < 0) return;

  int count = 0;
  for (int i = 1; i <= n; ++i) {
    int m = ReadSize("Размер V" + std::to_string(i), size);
    if (m < 0) return;
    std::cout << "Введите V" << i << ": ";
    const auto numbers = ReadNumbers(m);
    const std::vector<int> v(numbers.begin(), numbers.end());
    const std::multiset<int> candidate(v.begin(), v.end());
    if (std::includes(candidate.begin(), candidate.end(),
                      required.begin(), required.end())) ++count;
  }
  std::cout << "Подходящих векторов: " << count << '\n';
}

}  
