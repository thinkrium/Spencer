//
// Created by Thom on 1/22/2023.
//

#ifndef SPENCER_BRAIN_BASE_H
#define SPENCER_BRAIN_BASE_H

#include "Base.h"

namespace Systems {

    namespace Brain {

        class Brain_Base : public Base {
        public:
            explicit Brain_Base(const string &name);

            Brain_Base();
        };
    }
}
#endif //SPENCER_BRAIN_BASE_H
