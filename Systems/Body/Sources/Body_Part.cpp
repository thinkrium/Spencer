#include <string>
#include "Motion/Headers/Motion_Base.h"
#include "Body/Headers/Body_Part.h"

Systems::Body::Body_Part::Body_Part() {    cout << "Setting Body part" << endl;}


const map<Utilities::Enumerated_Joints, Systems::Body::Joint> &Systems::Body::Body_Part::getJoints() const {
    return joints;
}

void Systems::Body::Body_Part::setJoints(const map<Utilities::Enumerated_Joints, Joint> &joints) {
    Body_Part::joints = joints;
}

void Systems::Body::Body_Part::setJoint(Utilities::Enumerated_Joints jointName, Joint joint) {
   this->joints[jointName] = joint;
}


Systems::Body::Joint Systems::Body::Body_Part::getJoint(Utilities::Enumerated_Joints jointName) {

    Joint joint;
    return joint;
}

void Systems::Body::Body_Part::generateJointList() {

}

Systems::Body::Body_Part::~Body_Part() {
    cout << "Destroying Body Part Object" << endl;
}

Systems::Body::Body_Part::Body_Part(const string &name) : Motion_Base(name) {}
