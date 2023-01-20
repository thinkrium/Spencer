//
// Created by Thom on 1/18/2023.
//

#ifndef SPENCER_ACTIVITY_H
#define SPENCER_ACTIVITY_H

#include "Utililties/Headers/Logging.h"
#include "Vision/Headers/Vision.h"
#include "Base/Headers/System_Base.h"
#include "Motion/Headers/Motion.h"
#include <iostream>

using namespace std;
using namespace Utilities;

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
                 static void Activate_Thinking();

                /**
                 * Activates the vision system
                 */
                static void Activate_Vision();

                /**
                 * Activates the vision system
                 */
                static void Activate_Hearing();

                /**
                 * Activates the Motion system
                 */
                static void Activate_Motion();
        };
    }
}


#endif //SPENCER_ACTIVITY_H
