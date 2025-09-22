#include <iostream>

#include "src/hello.hpp"

int main() {
    int x = 5;
    addOneByReference(x);
    std::cout << x << std::endl; // returns 6
    std::cout << addOneByValue(x) << std::endl; // returns 7
}
