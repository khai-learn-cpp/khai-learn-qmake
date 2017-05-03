
#ifndef __LIB_WIDGETS_HPP
#define __LIB_WIDGETS_HPP

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QLabel>
#include "lib/utils.hpp"

namespace lib::widgets {
  using namespace lib::utils;
  typedef DerivedClass<QApplication> App;
  typedef DerivedClass<QMainWindow> MainWin;
  typedef DerivedClass<QLabel> Label;
}

#endif
