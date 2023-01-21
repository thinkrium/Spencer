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

string Systems::Body::Robot_Body::parseBodyPartNameFromEnum(Utilities::Body_Parts partName) {

    return "";
}


void Systems::Body::Robot_Body::generateBodyPartList() {

    Body_Part left_eye(parseBodyPartNameFromEnum(Utilities::Body_Parts::left_eye));
    this->setBodyPart(Utilities::Body_Parts::left_eye, left_eye);
    Body_Part right_eye(parseBodyPartNameFromEnum(Utilities::Body_Parts::right_eye));
    this->setBodyPart(Utilities::Body_Parts::right_eye, right_eye);
    Body_Part head(parseBodyPartNameFromEnum(Utilities::Body_Parts::head));
    this->setBodyPart(Utilities::Body_Parts::head, head);
    Body_Part neck(parseBodyPartNameFromEnum(Utilities::Body_Parts::neck));
    this->setBodyPart(Utilities::Body_Parts::neck, neck);
    Body_Part chest;
    this->setBodyPart(Utilities::Body_Parts::chest, chest);
    Body_Part abdomin;
    this->setBodyPart(Utilities::Body_Parts::abdomin, abdomin);
    Body_Part hips;
    this->setBodyPart(Utilities::Body_Parts::hips, hips);
    Body_Part left_leg;
    this->setBodyPart(Utilities::Body_Parts::left_leg, left_leg);
    Body_Part right_leg;
    this->setBodyPart(Utilities::Body_Parts::right_leg, right_leg);
    Body_Part left_foot_above_toes;
    this->setBodyPart(Utilities::Body_Parts::left_foot_above_toes,left_foot_above_toes);
    Body_Part right_foot_above_toes;
    this->setBodyPart(Utilities::Body_Parts::right_foot_above_toes,right_foot_above_toes);
    Body_Part left_foot_toes_section;
    this->setBodyPart(Utilities::Body_Parts::left_foot_toes_section,left_foot_toes_section);
    Body_Part right_foot_toes_section;
    this->setBodyPart(Utilities::Body_Parts::right_foot_toes_section,right_foot_toes_section);
    Body_Part left_arm;
    this->setBodyPart(Utilities::Body_Parts::left_arm,left_arm);
    Body_Part right_arm;
    this->setBodyPart(Utilities::Body_Parts::right_arm,right_arm);
    Body_Part left_hand;
    this->setBodyPart(Utilities::Body_Parts::left_hand,left_hand);
    Body_Part right_hand;
    this->setBodyPart(Utilities::Body_Parts::right_hand,right_hand);
    Body_Part left_hand_thumb_finger;
    this->setBodyPart(Utilities::Body_Parts::left_hand_thumb_finger, left_hand_thumb_finger);
    Body_Part left_hand_pointer_finger;
    this->setBodyPart(Utilities::Body_Parts::left_hand_pointer_finger, left_hand_pointer_finger);
    Body_Part left_hand_middle_finger;
    this->setBodyPart(Utilities::Body_Parts::left_hand_middle_finger, left_hand_middle_finger);
    Body_Part left_hand_index_finger;
    this->setBodyPart(Utilities::Body_Parts::left_hand_index_finger, left_hand_index_finger);
    Body_Part left_hand_pinky;
    this->setBodyPart(Utilities::Body_Parts::left_hand_pinky, left_hand_pinky);
    Body_Part right_hand_thumb_finger;
    this->setBodyPart(Utilities::Body_Parts::right_hand_thumb_finger, right_hand_thumb_finger);
    Body_Part right_hand_pointer_finger;
    this->setBodyPart(Utilities::Body_Parts::right_hand_pointer_finger, right_hand_pointer_finger);
    Body_Part right_hand_middle_finger;
    this->setBodyPart(Utilities::Body_Parts::right_hand_middle_finger, right_hand_middle_finger);
    Body_Part right_hand_index_finger;
    this->setBodyPart(Utilities::Body_Parts::right_hand_index_finger, right_hand_index_finger);
    Body_Part right_hand_pinky;
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
