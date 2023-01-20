//
// Created by Thom on 1/18/2023.
//

#ifndef SPENCER_MOTION_H
#define SPENCER_MOTION_H

#include <iostream>
#include "Body/Headers/Body_Part.h"

using namespace std;
namespace Systems {
    namespace Body {
        class Motion {

            private:
            public:


                /**
                 * Creates an empty motion object
                 */
                Motion();

                /**
                 * Creates a motion object with the list of body parts to move
                 * @param bodyParts
                 */
                explicit Motion(const map<string, Body_Part> &bodyParts);

                virtual ~Motion();

        };
    }
}
#endif //SPENCER_MOTION_H
