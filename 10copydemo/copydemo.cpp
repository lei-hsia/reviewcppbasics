//
// Created by xialei07 on 5/23/21.
//

#include "copydemo.h"
#include <iostream>
#include <string>

class String {
private:
    char* m_buffer;
    unsigned int m_size;
public:
    String(const char* string) {
        m_size = strlen(string);
        m_buffer = new char[m_size];
        memcpy(m_buffer, string, m_size);
        m_buffer[m_size] = 0;
    }

    // copy constructor
    String(const String& other) : m_size(other.m_size)
    {
        memcpy(this, &other, sizeof(String));
    }

    ~String(){
        delete[] m_buffer;
    }

    char& operator[](unsigned int index) {
        return m_buffer[index];
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& string);

};

std::ostream& operator<<(std::ostream& stream, const String& string){
    stream << string.m_buffer;
    return stream;
}

int copydemo() {
    String string = "Lei";
    String second = string;
    second[1] = 'a';
    std::cout << string << std::endl; // Lei
    std::cout << second << std::endl; // Lai
    std::cin.get();
}