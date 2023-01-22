//
// Created by Thom on 1/18/2023.
//

#include <iostream>
using namespace std;
#ifndef SPENCER_MOTOR_H
#define SPENCER_MOTOR_H

#include "Motion/Headers/Motion_Base.h"

namespace Systems {
    namespace Body {
        class Motor : public Motion_Base {
       public:
               virtual ~Motor();

            explicit Motor(const string &name);

            Motor();
       };
    }
}

#endif //SPENCER_MOTOR_H
