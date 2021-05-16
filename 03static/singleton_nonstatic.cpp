//
// Created by xialei07 on 5/15/21.
//

#include "singleton_nonstatic.h"
class Singleton{
public:
    static Singleton& Get(){
        static Singleton instance;
        return instance;
    }
    void Hello() {}
};

int singleton_nonstatic() {
    Singleton::Get().Hello();
}