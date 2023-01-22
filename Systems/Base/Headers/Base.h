//
// Created by Thom on 1/22/2023.
//

#ifndef SPENCER_BASE_H
#define SPENCER_BASE_H

#include <iostream>
using namespace std;

namespace Systems {
    class Base {


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

        Base(const string &name, const string &type, int id);

        explicit Base(const string &name);

        Base();

        string parseEnumerationAsName(const char* stringifiedEnumeration);

        virtual ~Base();

    };
}
#endif //SPENCER_BASE_H
