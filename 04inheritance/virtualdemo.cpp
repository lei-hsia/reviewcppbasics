//
// Created by xialei07 on 5/16/21.
//

#include "virtualdemo.h"
#include <iostream>

class Printable {
public:
    virtual std::string getClassName() = 0;
};

void Print(Printable* obj){
    std::cout << obj->getClassName() << std::endl;
}

class Entity : public Printable{
public:
    virtual std::string getName() { return "Entity"; }
    std::string getClassName() override { return "Entity"; }
};

class Player : public Entity {
private:
    std::string m_name;
public:
    Player(const std::string& name) : m_name(name) {}
    std::string getName() override { return m_name; }

    std::string getClassName() override { return "Player"; }
};

int main() {
    Entity* e = new Entity();
    Player* p = new Player("Lei");

    Print(e);
    Print(p);
    std::cin.get();
}