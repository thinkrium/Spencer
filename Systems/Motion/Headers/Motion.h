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

                map<string, Body_Part> body_parts;
            public:
            Motion();

            explicit Motion(const map<string, Body_Part> &bodyParts);
        };
    }
}
#endif //SPENCER_MOTION_H
