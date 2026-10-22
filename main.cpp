#include <clocale>
#include <iostream>

#include "task_01.h"
#include "task_02.h"
#include "task_03.h"
#include "task_04.h"
#include "task_05.h"
#include "task_06.h"
#include "task_07.h"
#include "task_08.h"
#include "task_09.h"

int main() {
  setlocale(LC_ALL, "Russian");

  std::cout << "Лабораторная работа №2. Вариант 7\n";
  lab2::RunTask01();
  lab2::RunTask02();
  lab2::RunTask03();
  lab2::RunTask04();
  lab2::RunTask05();
  lab2::RunTask06();
  lab2::RunTask07();
  lab2::RunTask08();
  lab2::RunTask09();
  return 0;
}
