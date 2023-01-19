#include "Motion/Headers/Motion_Base.h"

//
// Created by Thom on 1/18/2023.
//
Systems::Movement::Motion_Base::Motion_Base() {}

Systems::Movement::Motion_Base::Motion_Base(const string &name, const string &type, int id) : name(name), type(type),
                                                                                            id(id) {}

const string &Systems::Movement::Motion_Base::getName() const {
    return name;
}

void Systems::Movement::Motion_Base::setName(const string &name) {
    Motion_Base::name = name;
}

const string &Systems::Movement::Motion_Base::getType() const {
    return type;
}

void Systems::Movement::Motion_Base::setType(const string &type) {
    Motion_Base::type = type;
}

int Systems::Movement::Motion_Base::getId() const {
    return id;
}

void Systems::Movement::Motion_Base::setId(int id) {
    Motion_Base::id = id;
}

Systems::Movement::Motion_Base::~Motion_Base() {

}
