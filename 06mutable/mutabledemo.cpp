//
// Created by xialei07 on 5/18/21.
//

#include "mutabledemo.h"
#include <iostream>

class Entity {
private:
    std::string m_name;
    mutable int debugCount = 0;
public:
    const std::string& getName () const{
        debugCount++;
        return m_name;
    }
};

int main() {
    const Entity e;
    e.getName();

    int x = 8;
    auto f = [=]() mutable {
        x++;
        std::cout << x << std::endl;
    };

    f();
    std::cout << x << std::endl;
}