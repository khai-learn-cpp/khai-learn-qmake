QMAKE_CXX = clang++
QMAKE_CXXFLAGS += -std=c++1z
TEMPLATE += app
QT += core gui widgets
CONFIG += qt
HEADERS += hello.hpp
SOURCES += hello.cpp
SOURCES += main.cpp
TARGET = main.out
