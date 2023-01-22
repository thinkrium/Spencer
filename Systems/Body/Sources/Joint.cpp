#include "Body/Headers/Joint.h"

//
// Created by Thom on 1/18/2023.
//
Systems::Body::Joint::Joint() {
    generateMotorList();
}

void Systems::Body::Joint::generateMotorList() {

    if(this->shouldHaveMoreThanOneMotor()) {

        if (this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::ankle))) {
            generateAnkleMotors();
        }
        else if (this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::hip_joint))) {
            generateHipMotors();
        }
        else if (this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::shoulder))) {
            generateShoulderMotors() ;
        }
        else if (this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::wrist))) {
            generateWristMotors();
        }
        else if (this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle))) {
            generateTopKnuckleMotors();
        }
        else if (this->getName() == parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::neck_joint))) {
            generateNeckMotors();
        }
    }
}

Systems::Body::Joint::Joint(const string &name) : Motion_Base(name) {
    generateMotorList();
}



Systems::Body::Motor Systems::Body::Joint::getMotor(Utilities::Enumerated_Motor_Axis motorName) {
    return this->motors[motorName];
}

void Systems::Body::Joint::setMotor(Utilities::Enumerated_Motor_Axis motorName, Motor motor) {
    this->motors[motorName] = motor;
}

bool Systems::Body::Joint::shouldHaveMoreThanOneMotor() {
        string hips = parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::hip_joint));
        string neck = parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::neck_joint));
        string shoulder = parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::shoulder));
        string wrist = parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::wrist));
        string top_knuckle = parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::top_knuckle));
        string ankle = parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Joints::ankle));

        bool should_have_more_than_one_motor = false;

        if (
                this->getName() == hips
                ||
                this->getName() == neck
                ||
                this->getName() == shoulder
                ||
                this->getName() == wrist
                ||
                this->getName() == top_knuckle
                ||
                this->getName() == ankle
                ) {

            should_have_more_than_one_motor = true;
        }

        return should_have_more_than_one_motor;
}

void Systems::Body::Joint::generateAnkleMotors() {

    this->generateMotorsByAxis({"X", "Z"});
}

void Systems::Body::Joint::generateHipMotors() {

    this->generateMotorsByAxis({"X", "Y", "Z"});

}

void Systems::Body::Joint::generateNeckMotors() {
    this->generateMotorsByAxis({"X", "Y", "Z"});

}

void Systems::Body::Joint::generateShoulderMotors() {
    this->generateMotorsByAxis({"X", "Y", "Z"});

}

void Systems::Body::Joint::generateWristMotors() {
    this->generateMotorsByAxis({"X", "Y", "Z"});
}

void Systems::Body::Joint::generateTopKnuckleMotors() {
    this->generateMotorsByAxis({"X", "Y" });

}






Systems::Body::Joint::~Joint() {

}

void Systems::Body::Joint::generateMotorsByAxis(vector<string> motorAxis) {
    string W_Axis = "W";
    string X_Axis = "X";
    string Y_Axis = "Y";
    string Z_Axis = "Z";

    for(int i = 0; i < motorAxis.size(); i++) {

        if (motorAxis[i] == parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Motor_Axis:X))) {
            string motor_axis = parseEnumerationAsName(Enumeration_As_String(Utilities::Enumerated_Motor_Axis:X));
            Motor motor(motor_axis);

            if (motorAxis[i] == X_Axis) {
                this->setMotor(Utilities::Enumerated_Motor_Axis::X, motor);
            }
            else if (motorAxis[i] == Y_Axis) {
                this->setMotor(Utilities::Enumerated_Motor_Axis::Y, motor);
            }
            else if (motorAxis[i] == Z_Axis) {
                this->setMotor(Utilities::Enumerated_Motor_Axis::Z, motor);
            }
        }
    }
}
