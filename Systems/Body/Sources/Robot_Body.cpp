#include <map>
#include "Body/Headers/Robot_Body.h"
#include <memory>

//
// Created by Thom on 1/19/2023.
//
Systems::Body::Robot_Body::Robot_Body(const std::map <string, Body_Part> &bodyParts) : body_parts(bodyParts) {

}

Systems::Body::Robot_Body::Robot_Body() {

    this->generateBodyPartList();
}


void Systems::Body::Robot_Body::generateBodyPartList() {

    Body_Part left_eye;
    this->setBodyPart("Left Eye", left_eye);
    Body_Part right_eye;
    this->setBodyPart("Right Eye", right_eye);
    Body_Part head;
    this->setBodyPart("Head", head);
    Body_Part neck;
    this->setBodyPart("Neck", neck);
    Body_Part chest;
    this->setBodyPart("Chest", chest);
    Body_Part abdomin;
    this->setBodyPart("Abdomin", abdomin);
    Body_Part hips;
    this->setBodyPart("Hips", hips);
    Body_Part left_leg;
    this->setBodyPart("Left Leg", left_eye);
    Body_Part right_leg;
    this->setBodyPart("Right Leg", right_leg);
    Body_Part left_foot_above_toes;
    this->setBodyPart("Left Foot Above Toes",left_foot_above_toes);
    Body_Part right_foot_above_toes;
    this->setBodyPart("Right Foot Above Toes",right_foot_above_toes);
    Body_Part left_foot_toes_section;
    this->setBodyPart("Left Foot Toes Section",left_foot_toes_section);
    Body_Part right_foot_toes_section;
    this->setBodyPart("Right Foot Toes Section",right_foot_toes_section);
    Body_Part left_arm;
    this->setBodyPart("Left Arm",left_arm);
    Body_Part right_arm;
    this->setBodyPart("Right Arm",right_arm);
    Body_Part left_hand;
    this->setBodyPart("Left Hand",left_hand);
    Body_Part right_hand;
    this->setBodyPart("Right Hand",right_hand);
    Body_Part left_hand_thumb_finger;
    this->setBodyPart("Left Hand Thumb Finger", left_hand_thumb_finger);
    Body_Part left_hand_pointer_finger;
    this->setBodyPart("Left Hand Pointer Finger", left_hand_pointer_finger);
    Body_Part left_hand_middle_finger;
    this->setBodyPart("Left Hand Middle Finger", left_hand_middle_finger);
    Body_Part left_hand_index_finger;
    this->setBodyPart("Left Hand Index Finger", left_hand_index_finger);
    Body_Part left_hand_pinky;
    this->setBodyPart("Left Hand Pinky", left_hand_pinky);
    Body_Part right_hand_thumb_finger;
    this->setBodyPart("Right Hand Thumb Finger", right_hand_thumb_finger);
    Body_Part right_hand_pointer_finger;
    this->setBodyPart("Right Hand Pointer Finger", right_hand_pointer_finger);
    Body_Part right_hand_middle_finger;
    this->setBodyPart("Right Hand Middle Finger", right_hand_middle_finger);
    Body_Part right_hand_index_finger;
    this->setBodyPart("Right Hand Index Finger", right_hand_index_finger);
    Body_Part right_hand_pinky;
    this->setBodyPart("Right Hand Pinky", right_hand_pinky);

    logger.Info("Setting the body parts");
}

Systems::Body::Body_Part Systems::Body::Robot_Body::getBodyPart(string bodyPartName) { return this->body_parts[bodyPartName];}


void Systems::Body::Robot_Body::setBodyPart(string bodyPartName, Body_Part bodyPart) {

    this->body_parts[bodyPartName] = bodyPart;
}


Systems::Body::Robot_Body::~Robot_Body() {
    this->body_parts.clear();
}

const map<string, Systems::Body::Body_Part> &Systems::Body::Robot_Body::getBodyParts() const {
    return body_parts;
}

void Systems::Body::Robot_Body::setBodyParts(const map<string, Body_Part> &bodyParts) {
    body_parts = bodyParts;
}
