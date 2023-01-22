//
// Created by Thom on 1/22/2023.
//

#ifndef SPENCER_SENSOR_H
#define SPENCER_SENSOR_H

#include "Base/Headers/Brain_Base.h"
namespace Systems {

    namespace Senses {
        class Sensor : public Brain::Brain_Base {
        public:
            explicit Sensor(const string &name);

            Sensor();
        };
    }

}
#endif //SPENCER_SENSOR_H
