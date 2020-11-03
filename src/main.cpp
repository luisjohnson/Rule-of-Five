#include <iostream>

#include "../include/Movable.h"

Movable createObject(size_t size) {
    Movable object(size);
    return object;
}

void useObject(Movable object) {
    std::cout << "using object " << &object << std::endl;
}

int main() {
    Movable object1(4);
    Movable object2(object1);
    object1 = object2;
    Movable object3 = createObject(10);
    useObject(std::move(object3));
    object1 = std::move(object2);
    return 0;
}
