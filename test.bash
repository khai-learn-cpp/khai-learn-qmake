#! /usr/bin/env bash

(
  echo ':: Using qmake to create Makefile...'
  qmake-qt5 -o Makefile .pro
) && (
  echo ':: Running make...'
  make
) && (
  echo ':: Executing output...'
  ./main.out
) && (
  echo 'Done.'
) || (
  status=$?
  echo 'Failed.' >&2
  exit $status
)
