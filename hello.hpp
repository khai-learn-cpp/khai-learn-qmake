
#ifndef __HELLO_HPP
#define __HELLO_HPP

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QLabel>

template <class Base>
struct DerivedClass : public Base {
  template <typename ...Args> DerivedClass (Args & ...args) : Base(args ...) {}
};

class Hello {
private:
  typedef QApplication App;
  typedef DerivedClass<QMainWindow> MainWin;
  typedef DerivedClass<QLabel> Label;

public:
  Hello (int, char **);
  int status;
};

#endif
