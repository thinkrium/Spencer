//
// Created by Thom on 1/19/2023.
//

#ifndef SPENCER_ROBOT_BODY_H
#define SPENCER_ROBOT_BODY_H

#include <iostream>
#include "Body_Part.h"

using namespace std;

namespace Systems {
    namespace Body {
        class Robot_Body {

            private:

                /**
                 * List of named body parts
                 */
                map<string, Body_Part> body_parts;
        public:

            Robot_Body();

            explicit Robot_Body(const map<string, Body_Part> &bodyParts);

            /**
             * Gets a single body part by name
             * @param bodyPartName
             * @return
             */
            Body_Part getBodyPart(string bodyPartName);

            /**
             * sets a single body part by name
             * @param bodyPartName
             * @param bodyPart
             */
            void setBodyPart(string bodyPartName, Body_Part bodyPart);


            const map<string, Body_Part> &getBodyParts() const;

            void setBodyParts(const map<string, Body_Part> &bodyParts);

            virtual ~Robot_Body();

        };
    }
}

#endif //SPENCER_ROBOT_BODY_H
