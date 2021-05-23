cmake_minimum_required(VERSION 3.19)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

add_executable(HelloWorld 01pointer/pointer.cpp 01pointer/pointer.h 02reference/reference.cpp 02reference/reference.h 02reference/reference.cpp 02reference/reference.h 03static/static.cpp 03static/static.h 03static/StaticVar.cpp 03static/StaticVar.h 03static/static_inside.cpp 03static/static_inside.h 03static/singleton_nonstatic.cpp 03static/singleton_nonstatic.h 04inheritance/virtualdemo.cpp 04inheritance/virtualdemo.h 05const/constandpointer.cpp 05const/constandpointer.h 06mutable/mutabledemo.cpp 06mutable/mutabledemo.h 07memberinitializerlist/MemberInitializerListDemo.cpp 07memberinitializerlist/MemberInitializerListDemo.h 08smartpointer/scopedptr.cpp 08smartpointer/scopedptr.h 09uniqueptr/uniqueptrdemo.cpp 09uniqueptr/uniqueptrdemo.h 10copydemo/copydemo.cpp 10copydemo/copydemo.h 11arrow/arrowdemo.cpp 11arrow/arrowdemo.h)