
#ifndef __HELLO_HPP
#define __HELLO_HPP

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QLabel>

template <class Base>
struct SubClass : public Base {
  template <typename ...Args> SubClass (Args ...args) : Base(args ...) {}
};

class Hello {
private:
  typedef QApplication App;
  typedef SubClass<QMainWindow> MainWin;
  typedef SubClass<QLabel> Label;

public:
  Hello (int, char **);
  int status;
};

#endif
