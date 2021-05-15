//
// Created by xialei07 on 5/9/21.
//

#include "reference.h"
#include <iostream>
#define LOG(x) std::cout << x << std::endl;

void Increment(int& value) {
    value++;
}

int reference() {

    int a = 5;
    int b = 8;

    int* ref = &a;
    *ref = 2;
    ref = &b;
    *ref = 1;

    LOG(a);
    LOG(b);

    Increment(a);
    //LOG(a);

    std::cin.get();
}
