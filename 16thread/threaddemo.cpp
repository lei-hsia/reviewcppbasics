//
// Created by xialei07 on 5/30/21.
//

#include "threaddemo.h"
#include <iostream>
#include <thread>
#include <chrono>

bool s_finished = false;

void doWork() {
    std::cout << "Started thread id= " << std::this_thread::get_id() << std::endl;
    while (!s_finished){
        std::cout << "Working ... \n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}


int main() {
    std::thread worker(doWork);

    std::cin.get();
    s_finished = true;
    worker.join();

    std::cout << "Finished." << std::endl;
    std::cout << "Started thread id= " << std::this_thread::get_id() << std::endl;

    std::cin.get();
}