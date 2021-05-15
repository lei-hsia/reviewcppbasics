cmake_minimum_required(VERSION 3.19)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

add_executable(HelloWorld 01pointer/pointer.cpp 01pointer/pointer.h 02reference/reference.cpp 02reference/reference.h 02reference/reference.cpp 02reference/reference.h 03static/static.cpp 03static/static.h 03static/StaticVar.cpp 03static/StaticVar.h 03static/static_inside.cpp 03static/static_inside.h 03static/singleton_nonstatic.cpp 03static/singleton_nonstatic.h)