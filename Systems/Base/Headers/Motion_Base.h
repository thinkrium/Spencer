//
// Created by Thom on 1/18/2023.
//

#ifndef SPENCER_MOTION_BASE_H
#define SPENCER_MOTION_BASE_H
#include <iostream>
#include "Base.h"

using namespace std;
namespace Systems {
    namespace Body {
        
        class Motion_Base : public Base {
        public:
            Motion_Base();

            explicit Motion_Base(const string &name);
        };
    }
    
}

#endif //SPENCER_MOTION_BASE_H
