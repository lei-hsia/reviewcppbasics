//
// Created by xialei07 on 5/29/21.
//

#include "functionpointerdemo.h"
#include <iostream>

void helloworld(int a) {
    std::cout << "hello world" << a << std::endl;
}

int functionpointerdemo() {
    typedef void(*HelloWorldFunction)(int);
    HelloWorldFunction function = helloworld;
    function(7);
    std::cin.get();
}