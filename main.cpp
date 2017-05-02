#include "hello.hpp"

int main (int argc, char ** argv) {
  Hello hello(argc, argv);
  return hello.status;
}
