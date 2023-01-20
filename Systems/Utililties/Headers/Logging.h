//
// Created by Thom on 1/19/2023.
//

#ifndef SPENCER_LOGGING_H
#define SPENCER_LOGGING_H


#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include "Utililties/Headers/Enumerations.h"

using namespace std;


namespace Utilities {
    class Logging {
    public:
        Logging();
        void Trace(string param_message);
        void Debug(string param_message);
        void Info(string param_message);
        void Warning(string param_message);
        void Error(string param_message);
        void Fatal(string param_message);
        void Message(string param_message,   Logging_Level param_logging_level);
        ~Logging();
    private:
        string Log_Level_To_String(Logging_Level param_logging_level);
        string Determine_Log_Level_Color(Logging_Level param_logging_level);
        fstream file;
        string fileName;
        bool toFile;
        string filePath;

    };
}

#endif //SPENCER_LOGGING_H
