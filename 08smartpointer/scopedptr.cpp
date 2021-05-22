//
// Created by xialei07 on 5/22/21.
//

#include "scopedptr.h"
#include <iostream>

class Entity{
public:
    Entity(){
        std::cout << "Created Entity" << std::endl;
    }
    ~Entity(){
        std::cout << "Destroyed Entity" << std::endl;
    }
};

class ScopePtr{
private:
    Entity* m_ptr;
public:
    ScopePtr(Entity* ptr): m_ptr(ptr) {}
    ~ScopePtr() {
        delete m_ptr;
    }
};

int scopedptr() {
    {
        ScopePtr e = new Entity();
        // Entity* e1 = new Entity();
    }
    std::cin.get();
}