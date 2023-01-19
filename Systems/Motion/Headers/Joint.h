//
// Created by Thom on 1/18/2023.
//

#ifndef SPENCER_JOINT_H
#define SPENCER_JOINT_H

#include <iostream>
#include "Motion_Base.h"

using namespace std;

namespace Systems {
    namespace Motion {
        class Joint : public Motion_Base {

            public:
                Joint();

                virtual ~Joint();
        };
    }
}


#endif //SPENCER_JOINT_H
