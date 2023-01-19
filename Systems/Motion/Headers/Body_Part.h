//
// Created by Thom on 1/19/2023.
//

#ifndef SPENCER_BODY_PART_H
#define SPENCER_BODY_PART_H

#include "Motion_Base.h"
#include "Joint.h"
#include <map>

using namespace std;

namespace Systems {
    namespace Movement {
        class Body_Part : public Motion_Base {

            private:

                /**
                 * named list of joints
                 */
                map<string, Joint> joints;

        public:

                /**
                 * Gets the joints included in this body part
                 * @return map of joints
                 */
                const map <string, Joint> &getJoints() const;

                /**
                 * Sets the joint map as 1 entity
                 * @param joints
                 */
                void setJoints(const map <string, Joint> &joints);

                /**
                 * Creates the joints on init
                 * @param joints
                 */
                explicit Body_Part(const map<string, Joint> &joints);

                /**
                 * Initializes the name, type, and id of this body part as well as the map of joints
                 * @param name
                 * @param type
                 * @param id
                 * @param joints
                 */
                Body_Part(const string &name, const string &type, int id, const map<string, Joint> &joints);

                /**
                 * Creates an empty body part
                 */
                Body_Part();

                /**
                 * Creates a body part with name, id,and type
                 * @param name
                 * @param type
                 * @param id
                 */
                Body_Part(const string &name, const string &type, int id);

                /**
                 * destroys body part to recover memory
                 */
                virtual ~Body_Part();

        };
    }
};
#endif //SPENCER_BODY_PART_H
