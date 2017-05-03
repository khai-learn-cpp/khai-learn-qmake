QMAKE_C = clang
QMAKE_CXX = clang++
QMAKE_CXXFLAGS += -std=c++1z -Wall -Wextra
TEMPLATE += app
QT += core gui widgets
CONFIG += qt
HEADERS += hello.hpp
HEADERS += lib/utils.hpp
HEADERS += lib/widgets.hpp
SOURCES += hello.cpp
SOURCES += main.cpp
TARGET = main.out
