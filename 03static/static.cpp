#include "static.h"
#include <iostream>

extern int s_variable;

int static_demo() {

    std::cout << s_variable << std::endl;
    std::cin.get();
}