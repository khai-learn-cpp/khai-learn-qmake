
#ifndef __HELLO_CPP
#define __HELLO_CPP

#include "hello.hpp"

App::App (int argc, char ** argv) :
  QApplication(argc, argv), label("Hello, World!!")
{
  window.setCentralWidget(&label);
  window.show();
}

Hello::Hello (int argc, char ** argv) {
  status = App(argc, argv).exec();
}

#endif
