//
// Created by xialei07 on 5/29/21.
//

#include "functionptrbetter.h"
#include <iostream>
#include <vector>

void foreach(const std::vector<int>& nums, void(*func)(int)){
    for (int num: nums) func(num);
}

int main() {
    std::vector<int> nums = {1, 5, 4, 2, 3};
    foreach(nums, [](int v){std::cout << "Value: "<< v << std::endl;});
    std::cin.get();
}