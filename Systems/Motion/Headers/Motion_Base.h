//
// Created by Thom on 1/18/2023.
//
#include <iostream>

using namespace std;
#ifndef SPENCER_MOTION_BASE_H
#define SPENCER_MOTION_BASE_H

namespace Systems {
    namespace Motion {
        
        class Motion_Base {

            private:

                // Name of this part
                string name;

                // Type of part involved
                //
                // helpful in scenarios like motors
                string type;

                // part id
                int id;

            public:
                const string &getName() const;

                void setName(const string &name);

                const string &getType() const;

                void setType(const string &type);

                int getId() const;

                void setId(int id);

                Motion_Base(const string &name, const string &type, int id);

                Motion_Base();
        };
    }
    
}

#endif //SPENCER_MOTION_BASE_H
