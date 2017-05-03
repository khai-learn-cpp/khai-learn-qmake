
#ifndef __HELLO_CPP
#define __HELLO_CPP

#include "hello.hpp"

Hello::Hello (int argc, char ** argv) {
  App app(argc, argv);
  MainWin window;
  Label label("Hello, World!!");
  window.setCentralWidget(&label);
  window.show();
  status = app.exec();
}

#endif
