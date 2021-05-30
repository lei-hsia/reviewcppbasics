//
// Created by xialei07 on 5/29/21.
//

#include "functionptrbetter.h"
#include <iostream>
#include <vector>
#include <functional>

void foreach(const std::vector<int>& nums, const std::function<void(int)>& func){
    for (int num: nums) func(num);
}

int functionptrbetter() {
    std::vector<int> nums = {1, 5, 4, 2, 3};
    int a = 100;
    auto lambda = [&a](int v){std::cout << "Value: "<< v << a << std::endl;};
    foreach(nums, lambda);
    std::cin.get();
}