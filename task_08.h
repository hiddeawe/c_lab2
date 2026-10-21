#ifndef LAB2_TASK_08_H_
#define LAB2_TASK_08_H_

#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <numeric>
#include <string>
#include <vector>
#include "io_utils.h"

namespace lab2 {

inline void RunTask08() {
  std::cout << "\nЗадание 8.2. Соседние английские слова\n";
  int n = ReadSize("Количество слов (>= 2)", 2);
  if (n < 0) return;
  std::cout << "Введите английские слова: ";
  std::vector<std::string> input(n);
  for (auto& word : input) std::cin >> word;
  const std::list<std::string> words(input.begin(), input.end());
  std::deque<std::string> result;
  std::adjacent_difference(words.begin(), words.end(),
                           std::back_inserter(result),
                           [](const std::string& right,
                              const std::string& left) {
                             return std::string(1, left.front()) + right.back();
                           });
  result.erase(result.begin());
  std::cout << "D: ";
  Print(result);
}

}  
#endif 
