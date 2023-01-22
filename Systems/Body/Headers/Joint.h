//
// Created by Thom on 1/18/2023.
//

#ifndef SPENCER_JOINT_H
#define SPENCER_JOINT_H

#include <iostream>
#include <map>
#include <vector>
#include "Motion/Headers/Motion_Base.h"
#include "Motor.h"
#include "Utililties/Headers/Enumerations.h"
#include <cctype>

using namespace std;

namespace Systems {
    namespace Body {
        class Joint : public Motion_Base {

            private:

            /**
            * named list of motors
            */
            map<Utilities::Enumerated_Motor_Axis, Motor> motors;
           public:

                 Joint();

                explicit Joint(const string &name);

                /**
                 * Gets a single body part by name
                 * @param bodyPartName
                 * @return
                 */
                    Motor getMotor(Utilities::Enumerated_Motor_Axis motorName);

                    /**
                     * sets a single body part by name
                     * @param bodyPartName
                     * @param bodyPart
                     */
                    void setMotor(Utilities::Enumerated_Motor_Axis motorName, Motor motor);

                    /**
                     * checks which joint it is and determins if it should have more than
                     * one motor
                     * @return bool
                     */
                    bool shouldHaveMoreThanOneMotor();

                    /**
                     * Creates the list and calls Set Body parts to assign it to the
                     * map
                     */
                    void generateMotorList();

                    /**
                     * Generates a motor by axis by iterating through the list of motors sent in
                     *
                     * !!!! Send them in as capital for now !!!!!
                     * !!!! will fix later                  !!!!!
                     * !!!! EXAMPLE                         !!!!!
                     * !!!! This -> {X, Y, Z}               !!!!!
                     * !!!! Not This -> {x, y, z}           !!!!!
                     * @param motorAxis
                     */
                    void generateMotorsByAxis(vector<string> motorAxis);

                    /**
                     * generates the motors for the hips
                     */
                    void generateHipMotors();

                    /**
                     * generates the motors for the neck
                     */
                    void generateNeckMotors();

                    /**
                    * generates the motors for the shoulder
                    */
                    void generateShoulderMotors();

                    /**
                     * generates the motors for the wrist
                     */
                    void generateWristMotors();

                    /**
                     * generates the motors for the top knuckle
                     */
                    void generateTopKnuckleMotors();

                    /**
                     * generates the motors for the ankle
                     */
                    void generateAnkleMotors();

                    virtual ~Joint();
        };
    }
}


#endif //SPENCER_JOINT_H
