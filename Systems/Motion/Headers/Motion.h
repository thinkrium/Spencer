//
// Created by Thom on 1/18/2023.
//

#ifndef SPENCER_MOTION_H
#define SPENCER_MOTION_H

#include <iostream>
#include "Body_Part.h"

using namespace std;
namespace Systems {
    namespace Movement {
        class Motion {

            private:

                  /**
                   * List of named body parts
                   */
                  map<string, Body_Part> body_parts;
            public:

                /**
                 * Gets the list of named body parts
                 * @return
                 */
                const map<string, Body_Part> &getBodyParts() const;

                /**
                 * Sets the list of named body parts
                 * @param bodyParts
                 */
                void setBodyParts(const map<string, Body_Part> &bodyParts);

                /**
                 * Creates an empty motion object
                 */
                Motion();

                /**
                 * Creates a motion object with the list of body parts to move
                 * @param bodyParts
                 */
                explicit Motion(const map<string, Body_Part> &bodyParts);
        };
    }
}
#endif //SPENCER_MOTION_H
