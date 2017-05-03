#! /usr/bin/env bash

(
  echo ':: Using qmake to create Makefile...'
  qmake-qt5 -o Makefile .pro
) && (
  echo ':: Running make...'
  make
) && (
  if [[ -z $SKIP_OUTPUT_EXECUTION ]]
    then
      echo ':: Executing output...'
      ./main.out
    else
      echo ':: Skip output execution'
  fi
) && (
  echo 'Done.'
) || (
  status=$?
  echo 'Failed.' >&2
  exit $status
)
