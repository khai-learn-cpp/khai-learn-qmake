
#ifndef __HELLO_CPP
#define __HELLO_CPP

#include "hello.hpp"
#include <QApplication>
#include <QPushButton>

Hello::Hello (int argc, char ** argv) {
  QApplication app(argc, argv);
  status = app.exec();
}

#endif
