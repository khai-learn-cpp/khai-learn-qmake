
#ifndef __HELLO_CPP
#define __HELLO_CPP

#include "hello.hpp"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QLabel>

Hello::Hello (int argc, char ** argv) {
  QApplication app(argc, argv);
  QMainWindow window;
  QLabel label("Hello, World!!");
  window.setCentralWidget(&label);
  window.show();
  app.exec();
}

#endif
