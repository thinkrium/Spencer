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

     this->generateNeckJoints();
     this->generateTorsoJoints();
     this->generateArmJoints();
     this->generateHipJoints();
     this->generateLegJoints();
     this->generateFootJoints();

}


void Systems::Body::Body_Part::generateFootJoints() {

    // left foot
    if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_foot))) {
        Joint left_foot_toes(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::toes)));
        this->setJoint(Utilities::Enumerated_Joints::toes, left_foot_toes );
    }
    // right foot
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_foot))) {
        Joint right_foot_toes(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::toes)));
        this->setJoint(Utilities::Enumerated_Joints::toes, right_foot_toes );
    }

}

void Systems::Body::Body_Part::generateArmJoints() {

    // left arm
    if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_arm))) {
        Joint left_elbow(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::elbow)));
        this->setJoint(Utilities::Enumerated_Joints::elbow, left_elbow );
    }
    // right arm
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_arm))) {
        Joint right_elbow(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::elbow)));
        this->setJoint(Utilities::Enumerated_Joints::elbow, right_elbow );
    }
}

void Systems::Body::Body_Part::generateNeckJoints() {
    if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::neck))) {
        Joint neck(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::neck_joint)));
        this->setJoint(Utilities::Enumerated_Joints::neck_joint, neck );
    }
}

void Systems::Body::Body_Part::generateLegJoints() {

    // left leg
    if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_leg))) {
        Joint left_knee(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::knee)));
        this->setJoint(Utilities::Enumerated_Joints::knee, left_knee );
    }
    // right leg
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_leg))) {
        Joint right_knee(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::knee)));
        this->setJoint(Utilities::Enumerated_Joints::knee, right_knee);
    }

}

void Systems::Body::Body_Part::generateHandJoints() {
      this->generateLeftHandJoints();
      this->generateRightHandJoints();
}

void Systems::Body::Body_Part::generateLeftHandJoints() {
    // thumb top knuckle
    if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // thumb bottom knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // pointer top knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // pointer middle knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // pointer bottom knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // index top knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // index middle knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // index bottom knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // ring top knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // ring middle knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // ring bottom knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // pinky top knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // pinky middle knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }
    // pinky bottom knuckle
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger))) {
        Joint left_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, left_hand_thumb_finger_top_knuckle );
    }

}

void Systems::Body::Body_Part::generateRightHandJoints() {
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_hand_thumb_finger))) {
        Joint right_hand_thumb_finger_top_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::top_knuckle, right_hand_thumb_finger_top_knuckle );
    }
    else if(this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_hand_thumb_finger))) {
        Joint right_hand_thumb_finger_bottom_knuckle(parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::bottom_knuckle)));
        this->setJoint(Utilities::Enumerated_Joints::bottom_knuckle, right_hand_thumb_finger_bottom_knuckle );
    }

}

void Systems::Body::Body_Part::generateTorsoJoints() {

}
void Systems::Body::Body_Part::generateHipJoints() {}
Systems::Body::Body_Part::~Body_Part() {
    cout << "Destroying Body Part Object" << endl;
}

Systems::Body::Body_Part::Body_Part(const string &name) : Motion_Base(name) {}
