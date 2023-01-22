//
// Created by Thom on 1/19/2023.
//

#ifndef SPENCER_ROBOT_BODY_H
#define SPENCER_ROBOT_BODY_H

#include <iostream>
#include "Utililties/Headers/Logging.h"
#include "Body_Part.h"
#include "Utililties/Headers/Enumerations.h"
#include "Motion/Headers/Motion_Base.h"

using namespace std;
using namespace Utilities;

namespace Systems {
    namespace Body {
        class Robot_Body : Motion_Base {

            private:

                /**
                 * List of named body parts
                 */
                map<Utilities::Body_Parts, Systems::Body::Body_Part> body_parts;

                /**
                 * Logger
                 */
                 Logging logger;
        public:

            Robot_Body();

            explicit Robot_Body(const map<Utilities::Body_Parts, Body_Part> &bodyParts);

            /**
             * Gets a single body part by name
             * @param bodyPartName
             * @return
             */
            Body_Part getBodyPart(Utilities::Body_Parts bodyPartName);

            /**
             * sets a single body part by name
             * @param bodyPartName
             * @param bodyPart
             */
            void setBodyPart(Utilities::Body_Parts bodyPartName, Body_Part bodyPart);

            /**
             * Creates the list and calls Set Body parts to assign it to the
             * map
             */
            void generateBodyPartList();

            const map<Utilities::Body_Parts, Body_Part> &getBodyParts() const;

            /**
             * Sets the body parts as a whole in one shot
             * @param bodyParts
             */
            void setBodyParts(const map<Utilities::Body_Parts, Body_Part> &bodyParts);

            /**
             * Should be called on loop possibly on its own thread so that it can run
             * at all times
             *
             * the parameter is a map that should be sent in as capitals for now
             *
             * this -> {X, value}
             * not this -> {x, value}
             * @param movementAxis
             */
            void moveByAxis(map<string, float> movementAxis);

            virtual ~Robot_Body();



        };
    }
}

#endif //SPENCER_ROBOT_BODY_H
