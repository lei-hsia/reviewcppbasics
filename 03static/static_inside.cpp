//
// Created by xialei07 on 5/15/21.
//
#include "static_inside.h"
#include <iostream>
struct Entity {
    int x , y;
    static void Print(Entity e) {
        std::cout << e.x << ";" << e.y << std::endl;
    }
};

int static_inside() {

    Entity e{};
    e.x = 2;
    e.y = 3;
    Entity::Print(e);
}