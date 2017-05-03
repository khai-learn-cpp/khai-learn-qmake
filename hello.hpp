
#ifndef __HELLO_HPP
#define __HELLO_HPP

#include "lib/widgets.hpp"

class Hello {
private:
  typedef lib::utils::DerivedClass<lib::widgets::App> App;
  typedef lib::utils::DerivedClass<lib::widgets::MainWin> MainWin;
  typedef lib::utils::DerivedClass<lib::widgets::Label> Label;

public:
  Hello (int, char **);
  lib::utils::Optional<int, -1> status;
};

#endif
