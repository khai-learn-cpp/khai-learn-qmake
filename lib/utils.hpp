
#ifndef __LIB_UTILS_HPP
#define __LIB_UTILS_HPP

namespace lib::utils {

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

}

#endif
