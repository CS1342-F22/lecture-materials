cmake_minimum_required(VERSION 3.23)
project(banking)

set(CMAKE_CXX_STANDARD 14)

add_executable(banking main.cpp User.cpp User.h Date.cpp Date.h Bank.cpp Bank.h ATM.cpp ATM.h)
