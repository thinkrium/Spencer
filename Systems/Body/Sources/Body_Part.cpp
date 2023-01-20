#include <string>
#include "Motion/Headers/Motion_Base.h"
#include "Body/Headers/Body_Part.h"

//
// Created by Thom on 1/19/2023.
//
Systems::Body::Body_Part::Body_Part(const std::__cxx11::basic_string<char> &name,
                                    const std::__cxx11::basic_string<char> &type, int id) : Motion_Base(name, type,
                                                                                                          id) {}

Systems::Body::Body_Part::Body_Part() {    cout << "Setting Body part" << endl;}

Systems::Body::Body_Part::~Body_Part() {
  cout << "Destroying Body Part Object" << endl;
}

Systems::Body::Body_Part::Body_Part(const string &name, const string &type, int id, const map<string, Joint> &joints)
        : Motion_Base(name, type, id), joints(joints) {}

Systems::Body::Body_Part::Body_Part(const map<string, Joint> &joints) : joints(joints) {}

const map<string, Systems::Body::Joint> &Systems::Body::Body_Part::getJoints() const {
    return joints;
}

void Systems::Body::Body_Part::setJoints(const map<string, Joint> &joints) {
    Body_Part::joints = joints;
}

