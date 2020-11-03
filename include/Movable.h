//
// Created by Luis Johnson on 11/2/20.
//

#ifndef MOVABLE_H
#define MOVABLE_H

#include <cstdlib>

class Movable {
private:
    size_t _size;
    int* _data;

public:
    // Constructor
    Movable(size_t size);

    // 1. Destructor
    ~Movable();

    // 2. Copy Constructor
    Movable(const Movable &source);

    // 3. Copy Assigment Operator
    Movable &operator=(const Movable &source);

    // 4. Move Constructor
    Movable(Movable &&source);

    // 5. Move Assigment Operator
    Movable &operator=(Movable &&source);

};


#endif //MOVABLE_H
