//
// Created by Thom on 1/18/2023.
//

#ifndef SPENCER_JOINT_H
#define SPENCER_JOINT_H

#include <iostream>
#include <map>
#include "Motion_Base.h"
#include "Motor.h"

using namespace std;

namespace Systems {
    namespace Motion {
        class Joint : public Motion_Base {

            private:

            /**
            * named list of motors
            */
            map<string, Motor> motors;

            public:
                Joint();

                virtual ~Joint();
        };
    }
}


#endif //SPENCER_JOINT_H
