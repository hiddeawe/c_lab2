#ifndef LAB2_IO_UTILS_H_
#define LAB2_IO_UTILS_H_

#include <deque>
#include <list>
#include <string>
#include <vector>

namespace lab2 {

int ReadSize(const std::string& name, int minimum = 0,
             int divisor = 1, bool odd = false);
std::vector<int> ReadNumbers(int count);

void Print(std::list<int>::const_iterator first,
           std::list<int>::const_iterator last);
void Print(std::list<int>::const_reverse_iterator first,
           std::list<int>::const_reverse_iterator last);
void Print(const std::vector<int>& values);
void Print(const std::deque<int>& values);
void Print(const std::list<int>& values);
void Print(const std::deque<std::string>& values);

}  // namespace lab2

#endif  // LAB2_IO_UTILS_H_
