
#ifndef __HELLO_HPP
#define __HELLO_HPP

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QLabel>
#include <experimental/optional>

template <class Base>
struct DerivedClass : public Base {
  template <typename ...Args> DerivedClass (Args & ...args) : Base(args ...) {}
};

template <typename Base>
using Nullable = std::experimental::optional<Base>;

template <typename Base, Base byDefault>
class Optional : public Nullable<Base> {
private:
  typedef Nullable<Base> NBase;
public:
  template <typename ...Args> Optional (Args ...args) : NBase(args ...) {}
  operator Base () {
    return NBase::value_or(byDefault);
  }
};

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
