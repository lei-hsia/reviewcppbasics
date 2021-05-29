//
// Created by xialei07 on 5/29/21.
//

#include "autodemo.h"
#include <iostream>
#include <vector>

int autodemo() {
    std::vector<std::string> strings;
    strings.emplace_back("Apple");
    strings.emplace_back("Orange");

    for (auto & string : strings) {
        std::cout << string << std::endl;
    }

    // same as above
    for (std::vector<std::string>::iterator it = strings.begin();
         it != strings.end(); it++) {
        std::cout << *it << std::endl;
    }
}