#include <string>

void addOneByReference(int &value) {
   value++;
}

int addOneByValue(int value) {
   return ++value;
}

std::string hello() {
   return "Hello World!";
}
