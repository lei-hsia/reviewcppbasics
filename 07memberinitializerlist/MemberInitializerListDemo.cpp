//
// Created by xialei07 on 5/19/21.
//

#include "MemberInitializerListDemo.h"
#include <iostream>

class Entity {
private:
    std::string m_name;
public:
    Entity() : m_name("unknown"){}
    Entity(const std::string& name): m_name(name) {}
    const std::string& getName() const { return m_name; }
};

int memberinitializer() {
    Entity* e;
    int a = 2;
    int* b = new int[50];

    {
        auto* entity = new Entity("Lei");
        e = entity;
        std::cout << (*entity).getName() << std::endl;
        std::cout << entity->getName() << std::endl; // another way
    }

    Entity* e1 = new Entity();
    Entity* e2 = (Entity*)malloc(sizeof(Entity));
    std::cin.get();
    delete e;
    delete[] b;
}