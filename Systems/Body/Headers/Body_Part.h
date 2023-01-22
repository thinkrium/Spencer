//
// Created by Thom on 1/19/2023.
//

#ifndef SPENCER_BODY_PART_H
#define SPENCER_BODY_PART_H

#include "Motion/Headers/Motion_Base.h"
#include "Joint.h"
#include <map>

using namespace std;

namespace Systems {
    namespace Body {
        class Body_Part : public Motion_Base {

            private:

                /**
                 * named list of joints
                 */
                map<Utilities::Enumerated_Joints, Joint> joints;

        public:

                /**
                 * Gets the joints included in this body part
                 * @return map of joints
                 */
                const map <Utilities::Enumerated_Joints, Joint> &getJoints() const;

                /**
                 * Sets the joint map as 1 entity
                 * @param joints
                 */
                void setJoints(const map <Utilities::Enumerated_Joints, Joint> &joints);

                /**
                 * Creates the joints on init
                 * @param joints
                 */
                explicit Body_Part(const map<Utilities::Enumerated_Joints, Joint> &joints);

                /**
                 * Creates an empty body part
                 */
                Body_Part();

                 explicit Body_Part(const string &name);

                 /**
                  * generate the hand joints;
                  */
                 void generateHandJoints();

                /**
                * generate the leg joints;
                */
                void generateLegJoints();

                /**
                 * generate the foot joints;
                 */
                 void generateFootJoints();

                /**
                 * generate the arm joints;
                 */
                 void generateArmJoints();

                /**
                 * generate the hip joints;
                 */
                 void generateHipJoints();

                 /**
                 * generate the neck joints;
                 */
                 void generateNeckJoints();

                 void generateRightHandJoints();

                 void generateLeftHandJoints();

                 void generateTorsoJoints();

                 bool isBodyPart(Utilities::Body_Parts partName);

                /**
                 * Gets a single body part by name
                 * @param bodyPartName
                 * @return
                 */
                Joint getJoint(Utilities::Enumerated_Joints jointName);

                /**
                 * sets a single body part by name
                 * @param bodyPartName
                 * @param bodyPart
                 */
                void setJoint(Utilities::Enumerated_Joints jointName, Joint join);

                /**
                 * Creates the list and calls Set Body parts to assign it to the
                 * map
                 */
                void generateJointList();

                /**
                 * destroys body part to recover memory
                 */
                virtual ~Body_Part();

        };
    }
};
#endif //SPENCER_BODY_PART_H
