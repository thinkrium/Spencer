#include "Motion/Headers/Motion.h"

//
// Created by Thom on 1/18/2023.
//
Systems::Movement::Motion::Motion(const map<string, Body_Part> &bodyParts) : body_parts(bodyParts) {}

Systems::Movement::Motion::Motion() {}

const map<string, Systems::Movement::Body_Part> &Systems::Movement::Motion::getBodyParts() const {
    return body_parts;
}

void Systems::Movement::Motion::setBodyParts(const map<string, Body_Part> &bodyParts) {
    body_parts = bodyParts;
}

void Systems::Movement::Motion::setBodyPart(string bodyPartName, Body_Part bodyPart) {

    this->body_parts[bodyPartName] = bodyPart;
}

Systems::Movement::Body_Part Systems::Movement::Motion::getBodyPart(string bodyPartName) { return this->body_parts[bodyPartName];}