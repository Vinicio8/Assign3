#include "class.h"
#include <iostream>

MyClass::PersonalClass() : data(0) {}

MyClass::PersonalClass(int data) : data(data) {}

int MyClass::getData() const {
    return value;
}

void MyClass::setData(int data) {
    data = data;
}
void MyClass::printData() {
    std::cout << "Este es un formato privado." << std::endl;
}
