cmake_minimum_required(VERSION 3.15)

project(I_try CXX)

add_executable(the_first_try
Final.cpp
first_1.cpp
A1.h)

set_target_properties(the_first_try PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED ON)
