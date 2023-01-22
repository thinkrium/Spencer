#include <map>
#include "Body/Headers/Robot_Body.h"
#include <memory>

//
// Created by Thom on 1/19/2023.
//
Systems::Body::Robot_Body::Robot_Body(const std::map <Utilities::Body_Parts, Body_Part> &bodyParts) : body_parts(bodyParts) {

}

Systems::Body::Robot_Body::Robot_Body() {

    this->generateBodyPartList();
}


void Systems::Body::Robot_Body::generateBodyPartList() {


    // left eye
    Body_Part left_eye( parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_eye) ) );
    this->setBodyPart(Utilities::Body_Parts::left_eye, left_eye);

    // right eye
    Body_Part right_eye( parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_eye)));
    this->setBodyPart(Utilities::Body_Parts::right_eye, right_eye);

    // head
    Body_Part head( parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::head )));
    this->setBodyPart(Utilities::Body_Parts::head, head);

    // neck
    Body_Part neck(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::neck)));
    this->setBodyPart(Utilities::Body_Parts::neck, neck);

    // torso
    Body_Part torso(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::torso)));
    this->setBodyPart(Utilities::Body_Parts::torso, torso);

    // hips
    Body_Part hips( parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::hips )));
    this->setBodyPart(Utilities::Body_Parts::hips, hips);

    // left leg
    Body_Part left_leg(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_leg )));
    this->setBodyPart(Utilities::Body_Parts::left_leg, left_leg);

    // right leg
    Body_Part right_leg(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_leg )));
    this->setBodyPart(Utilities::Body_Parts::right_leg, right_leg);

    // left foot above toes
    Body_Part left_foot(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_foot_above_toes )));
    this->setBodyPart(Utilities::Body_Parts::left_foot, left_foot);

    // right foot above toes
    Body_Part right_foot(   parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_foot_above_toes)));
    this->setBodyPart(Utilities::Body_Parts::right_foot, right_foot);

    // left arm
    Body_Part left_arm( parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_arm)));
    this->setBodyPart(Utilities::Body_Parts::left_arm, left_arm);

    // right arm
    Body_Part right_arm( parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_arm)));
    this->setBodyPart(Utilities::Body_Parts::right_arm, right_arm);

    // left hand
    Body_Part left_hand( parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand)));
    this->setBodyPart(Utilities::Body_Parts::left_hand, left_hand);

    // right hand
    Body_Part right_hand(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_hand)));
    this->setBodyPart(Utilities::Body_Parts::right_hand, right_hand);

    // left hand thumb finger
    Body_Part left_hand_thumb_finger(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_thumb_finger)));
    this->setBodyPart(Utilities::Body_Parts::left_hand_thumb_finger, left_hand_thumb_finger);

    // left hand pointer finger
    Body_Part left_hand_pointer_finger(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_pointer_finger)));
    this->setBodyPart(Utilities::Body_Parts::left_hand_pointer_finger, left_hand_pointer_finger);

    // left hand middle finger
    Body_Part left_hand_middle_finger(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_middle_finger)));
    this->setBodyPart(Utilities::Body_Parts::left_hand_middle_finger, left_hand_middle_finger);

    // left hand index finger
    Body_Part left_hand_index_finger(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_index_finger)));
    this->setBodyPart(Utilities::Body_Parts::left_hand_index_finger, left_hand_index_finger);

    // left hand pinky
    Body_Part left_hand_pinky( parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::left_hand_pinky)));
    this->setBodyPart(Utilities::Body_Parts::left_hand_pinky, left_hand_pinky);

    // right hand thumb finger
    Body_Part right_hand_thumb_finger( parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_hand_thumb_finger)));
    this->setBodyPart(Utilities::Body_Parts::right_hand_thumb_finger, right_hand_thumb_finger);

    // right hand pointer finger
    Body_Part right_hand_pointer_finger(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_hand_pointer_finger)));
    this->setBodyPart(Utilities::Body_Parts::right_hand_pointer_finger, right_hand_pointer_finger);

    // right hand middle finger
    Body_Part right_hand_middle_finger(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_hand_middle_finger)));
    this->setBodyPart(Utilities::Body_Parts::right_hand_middle_finger, right_hand_middle_finger);

    // right hand index finger
    Body_Part right_hand_index_finger(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::Utilities::Body_Parts::right_hand_index_finger)));
    this->setBodyPart(Utilities::Body_Parts::right_hand_index_finger, right_hand_index_finger);

    // right hand pinky
    Body_Part right_hand_pinky(  parseEnumerationAsName(Enumeration_As_String(Utilities::Body_Parts::right_hand_pinky)));
    this->setBodyPart(Utilities::Body_Parts::right_hand_pinky, right_hand_pinky);



    logger.Info("Setting the body parts");
}

Systems::Body::Body_Part Systems::Body::Robot_Body::getBodyPart(Utilities::Body_Parts bodyPartName) { return this->body_parts[bodyPartName];}


void Systems::Body::Robot_Body::setBodyPart(Utilities::Body_Parts bodyPartName, Body_Part bodyPart) {

    this->body_parts[bodyPartName] = bodyPart;
}


Systems::Body::Robot_Body::~Robot_Body() {
    this->body_parts.clear();
}

const map<Utilities::Body_Parts, Systems::Body::Body_Part> &Systems::Body::Robot_Body::getBodyParts() const {
    return body_parts;
}

void Systems::Body::Robot_Body::setBodyParts(const map<Utilities::Body_Parts, Body_Part> &bodyParts) {
    body_parts = bodyParts;
}

void Systems::Body::Robot_Body::moveByAxis(map<string, float> movementAxis) {
    this->leanTowards(movementAxis);
}

void Systems::Body::Robot_Body::leanTowards(map<string, float> movementAxis) {

}

