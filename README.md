# cppgenericmakefile
C++ Generic Makefile for small/medium projects. Integrated unit_test_framework in sample Main.cpp. 
To use the unit_test_framework, uncomment TEST_MODE in line 42 of MakeFile


## How to Use
![make commands](https://s3.gifyu.com/images/make-commands.gif)
1. ``make``  use this command to compile and link 
2. ``make clean``  use command to clean object files
3. ``make unittest unit=src/Logic.cpp`` use this command to perform unit testing
![unit_testing](https://s6.gifyu.com/images/unit_testing.gif)


## NOTES:
IMPORTANT FOLDERS
1. src - contains all the source code and corresponding header files
2. inc - contains the common / custom headers (i.e debug headers)
3. obj - contains the object files
4. bin - contains the executable file


credits:
https://github.com/eecs280staff/unit_test_framework for the unit_test_framework 
