//
// Created by xialei07 on 5/29/21.
//

#include "templateDemo.h"
#include <iostream>
#include <string>

#define LOG(x) std::cout << x << std::endl

template<typename T, int N>
class Array {
private:
    T m_array[N];
public:
    int getSize() const { return N; }
};

int ArrayDemo() {
    Array<int ,5> array;
    LOG(array.getSize());
    //std::cout << array.getSize() << std::endl;
    std::cin.get();
}