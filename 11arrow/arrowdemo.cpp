//
// Created by xialei07 on 5/23/21.
//

#include "arrowdemo.h"
#include <iostream>
#include <string>

struct Vector3 {
    float x, y, z;
};

int main() {
     int offset_x = (uintptr_t)&((Vector3*)nullptr)->y;
     std::cout << offset_x << std::endl;

     std::cin.get();
}