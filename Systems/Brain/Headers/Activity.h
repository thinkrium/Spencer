//
// Created by Thom on 1/18/2023.
//

#ifndef SPENCER_ACTIVITY_H
#define SPENCER_ACTIVITY_H

#include "Base/Headers/Base.h"
#include <iostream>

using namespace std;

namespace Systems {
    namespace Brain {
        class Activity {

            public:

                /**
                 *  This runs all of the Brain activity and calls all the functionality
                 *  it sort of functions as the brain main
                 */
                static void Run();

                /**
                 * Activates the vision system
                 */
                void Activate_Vision();

                /**
                 * Activates the Motion system
                 */
                void Activate_Motion();
        };
    }
}

 
#endif //SPENCER_ACTIVITY_H
