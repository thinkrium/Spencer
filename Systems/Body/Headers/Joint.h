//
// Created by Thom on 1/18/2023.
//

#ifndef SPENCER_JOINT_H
#define SPENCER_JOINT_H

#include <iostream>
#include <map>
#include "Motion/Headers/Motion_Base.h"
#include "Motor.h"
#include "Utililties/Headers/Enumerations.h"

using namespace std;

namespace Systems {
    namespace Body {
        class Joint : public Motion_Base {

            private:

            /**
            * named list of motors
            */
            map<Utilities::Joints, Motor> motors;
           public:

                 Joint();
                 Joint(const string &name, const string &type, int id, const map<Utilities::Joints, Motor> &motors);

                 explicit Joint(const map<Utilities::Joints, Motor> &motors);


                    /**
                     * Gets a single body part by name
                     * @param bodyPartName
                     * @return
                     */
                    Joint getJoint(Utilities::Joints jointName);

                    /**
                     * sets a single body part by name
                     * @param bodyPartName
                     * @param bodyPart
                     */
                    void setJoint(Utilities::Joints jointName, Joint joint);

                    /**
                     * Creates the list and calls Set Body parts to assign it to the
                     * map
                     */
                    void generateJointList();

                   virtual ~Joint();
        };
    }
}


#endif //SPENCER_JOINT_H
