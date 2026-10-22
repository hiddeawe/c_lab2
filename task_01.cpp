#include "task_01.h"

#include <iostream>
#include <list>
#include <vector>
#include "io_utils.h"

namespace lab2 {

void RunTask01() {
  std::cout << "\nЗадание 1.2. Список в прямом и обратном порядке\n";
  int n = ReadSize("Размер списка", 1);
  if (n < 0) return;
  std::cout << "Введите числа: ";
  const std::vector<int> input = ReadNumbers(n);
  const std::list<int> values(input.begin(), input.end());
  std::cout << "Прямой порядок: ";
  Print(values.begin(), values.end());
  std::cout << "Обратный порядок: ";
  Print(values.rbegin(), values.rend());
}

}  