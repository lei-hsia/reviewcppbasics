//
// Created by xialei07 on 5/23/21.
//

#include "stldemo.h"
#include <iostream>
#include <vector>

struct Vertex {
    float x, y, z;
};

// overloading operator to stream templates: write things to stream
std::ostream& operator<<(std::ostream& ostream, const Vertex& vertex){
    ostream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return ostream;
}

void function(const std::vector<Vertex>& vertices){

}

int main() {
    std::vector<Vertex> vertices;
    vertices.push_back({1,2,3});
    vertices.push_back({11,22,33});

    vertices.erase(vertices.begin()+1);

    for (const Vertex& v : vertices) {
        std::cout << v << std::endl;
    }
    std::cin.get();
}