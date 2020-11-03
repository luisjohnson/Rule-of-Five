//
// Created by Luis Johnson on 11/2/20.
//

#include "../include/Movable.h"
#include <iostream>

Movable::Movable(size_t size) : _size(size) {
    _data = new int[_size];
    std::cout << "CONSTRUCTOR: Allocating " << _size*sizeof(size_t) << " bytes of data  at " << this << std::endl;
}

Movable::~Movable() {
    std::cout << "(1)DESTRUCTOR: Deleting instance at " << this << std::endl;
    delete [] _data;
}

Movable::Movable(const Movable &source) {
    _size = source._size;
    _data = new int[_size];
    *_data = *source._data;
    std::cout << "(2)COPY CONSTRUCTOR: Copy from " << source._data << " to " << this << std::endl;
}

Movable &Movable::operator=(const Movable &source) {
    std::cout << "(3)COPY ASSIGMENT OPERATOR: Assigning data from " << source._data <<
                                                                    " to " << this << std::endl;
    if (this == &source)
        return *this;
    delete [] _data;
    _data = new int[source._size];
    _size = source._size;
    return *this;
}

Movable::Movable(Movable &&source) {
    std::cout << "(4)MOVE CONSTRUCTOR : Moving instance from " << &source <<
                                                           " to " << this << std::endl;
    _data = source._data;
    _size = source._size;
    source._data = nullptr;
    source._size = 0;
}

Movable &Movable::operator=(Movable &&source) {
    std::cout << "(5)MOVE ASSIGMENT OPERATOR: Moving (assigning) instance " << &source <<
                                                            "to instance " << this << std::endl;
    if (this == &source)
        return *this;
    delete [] _data;
    _data = source._data;
    _size = source._size;
    source._data = nullptr;
    source._size = 0;
    return *this;
}
