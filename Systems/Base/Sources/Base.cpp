//
// Created by Thom on 1/22/2023.
//
#include "Base/Headers/Base.h"

//
// Created by Thom on 1/18/2023.
//
Systems::Base::Base() {}

Systems::Base::Base(const string &name, const string &type, int id) : name(name), type(type),
                                                                                          id(id) {}

const string &Systems::Base::getName() const {
    return name;
}

void Systems::Base::setName(const string &name) {
    Base::name = name;
}

const string &Systems::Base::getType() const {
    return type;
}

void Systems::Base::setType(const string &type) {
    Base::type = type;
}

int Systems::Base::getId() const {
    return id;
}

void Systems::Base::setId(int id) {
    Base::id = id;
}

string Systems::Base::parseEnumerationAsName(const char* stringifiedEnumeration) {
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

Systems::Base::~Base() {
    cout << "I am destroying a " << this->name << endl;
}

Systems::Base::Base(const string &name) : name(name) {
    this->name = name;
}
