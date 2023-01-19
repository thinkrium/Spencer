//
// Created by Thom on 1/18/2023.
//

#include <iostream>
using namespace std;
#ifndef SPENCER_MOTOR_H
#define SPENCER_MOTOR_H

#include "Motion_Base.h"

namespace Systems {
    namespace Motion {
        class Motor : public Motion_Base {
       public:
               virtual ~Motor();

               Motor();
       };
    }
}

#endif //SPENCER_MOTOR_H
