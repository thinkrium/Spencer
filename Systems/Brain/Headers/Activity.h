//
// Created by Thom on 1/18/2023.
//

#ifndef SPENCER_ACTIVITY_H
#define SPENCER_ACTIVITY_H

#include "Base.h"

namespace Systems {
    namespace Brain {
        class Activity {

            public:
                static void Run();
                void Activate_Vision();
                void Activate_Motion();
        };
    }
}

}
#endif //SPENCER_ACTIVITY_H
