#include "Body/Headers/Joint.h"

//
// Created by Thom on 1/18/2023.
//
Systems::Body::Joint::Joint() {}

Systems::Body::Joint::~Joint() {

}

void Systems::Body::Joint::generateJointList() {

}


Systems::Body::Joint Systems::Body::Joint::getJoint(Utilities::Enumerated_Joints jointName) {
    Joint joint;

    return joint;
}

void Systems::Body::Joint::setJoint(Utilities::Enumerated_Joints jointName, Joint joint) {

}

Systems::Body::Joint::Joint(const string &name) : Motion_Base(name) {}
