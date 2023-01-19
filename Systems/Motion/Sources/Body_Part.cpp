#include <string>
#include "Motion/Headers/Motion_Base.h"
#include "Motion/Headers/Body_Part.h"

//
// Created by Thom on 1/19/2023.
//
Systems::Movement::Body_Part::Body_Part(const std::__cxx11::basic_string<char> &name,
                                      const std::__cxx11::basic_string<char> &type, int id) : Motion_Base(name, type,
                                                                                                          id) {}

Systems::Movement::Body_Part::Body_Part() {}

Systems::Movement::Body_Part::~Body_Part() {

}

Systems::Movement::Body_Part::Body_Part(const string &name, const string &type, int id, const map<string, Joint> &joints)
        : Motion_Base(name, type, id), joints(joints) {}

Systems::Movement::Body_Part::Body_Part(const map<string, Joint> &joints) : joints(joints) {}

const map<string, Systems::Movement::Joint> &Systems::Movement::Body_Part::getJoints() const {
    return joints;
}

void Systems::Movement::Body_Part::setJoints(const map<string, Joint> &joints) {
    Body_Part::joints = joints;
}

