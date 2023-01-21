#include <string>
#include "Motion/Headers/Motion_Base.h"
#include "Body/Headers/Body_Part.h"

Systems::Body::Body_Part::Body_Part() {    cout << "Setting Body part" << endl;}


const map<Utilities::Joints, Systems::Body::Joint> &Systems::Body::Body_Part::getJoints() const {
    return joints;
}

void Systems::Body::Body_Part::setJoints(const map<Utilities::Joints, Joint> &joints) {
    Body_Part::joints = joints;
}

void Systems::Body::Body_Part::setJoint(Utilities::Joints jointName, Joint joint) {
   this->joints[jointName] = joint;
}


Systems::Body::Joint Systems::Body::Body_Part::getJoint(Utilities::Joints jointName) {

}

void Systems::Body::Body_Part::generateJointList() {

    switch (this->getName()) {

    }

}

Systems::Body::Body_Part::~Body_Part() {
    cout << "Destroying Body Part Object" << endl;
}

Systems::Body::Body_Part::Body_Part(const string &name) : Motion_Base(name) {}
