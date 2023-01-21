#include "Motion/Headers/Motion_Base.h"

//
// Created by Thom on 1/18/2023.
//
Systems::Body::Motion_Base::Motion_Base() {}

Systems::Body::Motion_Base::Motion_Base(const string &name, const string &type, int id) : name(name), type(type),
                                                                                          id(id) {}

const string &Systems::Body::Motion_Base::getName() const {
    return name;
}

void Systems::Body::Motion_Base::setName(const string &name) {
    Motion_Base::name = name;
}

const string &Systems::Body::Motion_Base::getType() const {
    return type;
}

void Systems::Body::Motion_Base::setType(const string &type) {
    Motion_Base::type = type;
}

int Systems::Body::Motion_Base::getId() const {
    return id;
}

void Systems::Body::Motion_Base::setId(int id) {
    Motion_Base::id = id;
}

string Systems::Body::Motion_Base::parseEnumerationAsName(const char* stringifiedEnumeration) {
    string stringFromEnumeration = stringifiedEnumeration;
    int last_scope_separator_index = stringFromEnumeration.find_last_of(":") + 1;
    string enumerated_value = stringFromEnumeration.substr(last_scope_separator_index, stringFromEnumeration.size());
    for(int i = 0; i < enumerated_value.size(); i++) {
         char letter = enumerated_value[i];
         if (letter == '_') {
             enumerated_value[i] = ' ';
         }
    }
    return  enumerated_value;
}

Systems::Body::Motion_Base::~Motion_Base() {

}

Systems::Body::Motion_Base::Motion_Base(const string &name) : name(name) {}
