#include "Body/Headers/Joint.h"

//
// Created by Thom on 1/18/2023.
//
Systems::Body::Joint::Joint() {}

Systems::Body::Joint::~Joint() {

}

Systems::Body::Joint::Joint(const string &name, const string &type, int id, const map<Utilities::Joints, Motor> &motors)
        : Motion_Base(name, type, id), motors(motors) {}

Systems::Body::Joint::Joint(const map<Utilities::Joints, Motor> &motors) : motors(motors) {}
