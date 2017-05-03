
#ifndef __HELLO_HPP
#define __HELLO_HPP

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QLabel>
#include <experimental/optional>
#include "lib/utils.hpp"

class Hello {
private:
  typedef lib::utils::DerivedClass<QApplication> App;
  typedef lib::utils::DerivedClass<QMainWindow> MainWin;
  typedef lib::utils::DerivedClass<QLabel> Label;

public:
  Hello (int, char **);
  lib::utils::Optional<int, -1> status;
};

#endif
