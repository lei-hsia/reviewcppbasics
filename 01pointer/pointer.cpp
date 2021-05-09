//
// Created by xialei07 on 5/9/21.
//

#include "pointer.h"
#include <iostream>

int pointer() {
    char * buffer = new char [8];
    memset(buffer, 0, 8);

    char ** ptr = &buffer;

    delete[] buffer;

}