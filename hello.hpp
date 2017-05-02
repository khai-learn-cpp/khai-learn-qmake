
#ifndef __HELLO_HPP
#define __HELLO_HPP

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QLabel>

class App : public QApplication {
private:
  QMainWindow window;
  QLabel label;
public:
  App (int argc, char ** argv);
};

class Hello {
public:
  Hello (int, char **);
  int status;
};

#endif
