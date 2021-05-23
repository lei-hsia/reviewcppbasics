//
// Created by xialei07 on 5/22/21.
//

#include "uniqueptrdemo.h"
#include <iostream>
#include <memory>
class Entity {
public:
    Entity() {
        std::cout << "Created Entity" << std::endl;
    }
    ~Entity() {
        std::cout << "Destroyed Entity" << std::endl;
    }

    void print() {}
};

int uniqueptrdemo() {
    {
        std::weak_ptr<Entity> e0;
        {
            std::shared_ptr<Entity> sharedPtr = std::make_shared<Entity>();
            std::weak_ptr<Entity> weakPtr = std::make_shared<Entity>();
            e0 = sharedPtr;
        }
    }
    std::cin.get();
}