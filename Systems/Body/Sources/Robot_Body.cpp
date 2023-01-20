#include <map>
#include "Body/Headers/Robot_Body.h"

//
// Created by Thom on 1/19/2023.
//
Systems::Body::Robot_Body::Robot_Body(const std::map <string, Body_Part> &bodyParts) : body_parts(bodyParts) {

}

Systems::Body::Robot_Body::Robot_Body() {


      logger.Info("Setting the body parts");

}

Systems::Body::Body_Part Systems::Body::Robot_Body::getBodyPart(string bodyPartName) { return this->body_parts[bodyPartName];}


void Systems::Body::Robot_Body::setBodyPart(string bodyPartName, Body_Part bodyPart) {

    this->body_parts[bodyPartName] = bodyPart;
}


Systems::Body::Robot_Body::~Robot_Body() {

}

const map<string, Systems::Body::Body_Part> &Systems::Body::Robot_Body::getBodyParts() const {
    return body_parts;
}

void Systems::Body::Robot_Body::setBodyParts(const map<string, Body_Part> &bodyParts) {
    body_parts = bodyParts;
}
