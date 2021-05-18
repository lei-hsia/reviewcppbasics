//
// Created by xialei07 on 5/16/21.
//

#include "constandpointer.h"
#include <iostream>
#include <string>

class Entity {
private:
    int m_X, m_Y;
    mutable int var;
public:
    int getX() const {
        var = 2;
        return m_X;
    }
    void setX(int x) {m_X = x;}
};

void PrintEntity(const Entity& e) {
    std::cout << e.getX() << std::endl;
}

int constandpointer() {
    const int MAX_AGE = 120;
    int* a = new int;

    *a = 2;
    a = (int*)&MAX_AGE; // bypass const int MAX_AGE by creating a pointer
    std::cout << a << std::endl;
    std::cout << *a << std::endl;

    std::cin.get();
}