
#ifndef __HELLO_HPP
#define __HELLO_HPP

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QLabel>
#include <experimental/optional>
#include "lib/utils.hpp"

class Hello {
private:
  typedef DerivedClass<QApplication> App;
  typedef DerivedClass<QMainWindow> MainWin;
  typedef DerivedClass<QLabel> Label;

public:
  Hello (int, char **);
  Optional<int, -1> status;
};

#endif
