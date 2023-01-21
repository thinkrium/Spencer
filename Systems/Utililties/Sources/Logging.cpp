//
// Created by Thom on 1/19/2023.
//

#include "Utililties/Headers/Logging.h"

using namespace Utilities;

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

Logging::Logging() {

    this->toFile = false;
}
void Logging::Trace(string param_message) {
    this->Message(param_message, Enumerated_Logging_Level::Trace);
}

void Logging::Debug(string param_message) {
    this->Message(param_message, Enumerated_Logging_Level::Debug);
}

void Logging::Info(string param_message) {
    this->Message(param_message, Enumerated_Logging_Level::Info);
}

void Logging::Warning(string param_message) {
    this->Message(param_message, Enumerated_Logging_Level::Warning);
}

void Logging::Error(string param_message) {
    this->Message(param_message, Enumerated_Logging_Level::Error);
}

void Logging::Fatal(string param_message) {
    this->Message(param_message, Enumerated_Logging_Level::Fatal);
}

string Logging::Determine_Log_Level_Color(Enumerated_Logging_Level param_logging_level) {
    switch (param_logging_level) {
        case Enumerated_Logging_Level::Trace:
            return  RESET;
            break;
        case Enumerated_Logging_Level::Debug:
            return YELLOW;
            break;
        case Enumerated_Logging_Level::Info:
            return RESET;
            break;
        case Enumerated_Logging_Level::Warning:
            return YELLOW;
            break;
        case Enumerated_Logging_Level::Error:
            return RED;
            break;
        case Enumerated_Logging_Level::Fatal:
            return MAGENTA;
            break;
        default:
            return "That is not a Log Level!";
    }
}

string Logging::Log_Level_To_String(Enumerated_Logging_Level param_logging_level) {
    switch (param_logging_level) {
        case Enumerated_Logging_Level::Trace:
            return "Trace";
            break;
        case Enumerated_Logging_Level::Debug:
            return "Debug";
            break;
        case Enumerated_Logging_Level::Info:
            return "Info";
            break;
        case Enumerated_Logging_Level::Warning:
            return "Warning";
            break;
        case Enumerated_Logging_Level::Error:
            return "Error";
            break;
        case Enumerated_Logging_Level::Fatal:
            return "Fatal";
            break;
        default:
            return "That is not a Log Level!";
    }
}

void Logging::Message(string param_message, Enumerated_Logging_Level param_logging_level) {
    auto tt = time(nullptr);
    auto* ti = localtime(&tt);
    std::stringstream time_stamp;
    time_stamp << std::put_time(ti, "%c");
    string time_stamped_message = this->Determine_Log_Level_Color(param_logging_level) + "Log Level: " + this->Log_Level_To_String(param_logging_level ) + RESET + " - [" + time_stamp.str() + "] " + param_message;

    cout << time_stamped_message << endl;
    if (this->toFile) {
        this->file << time_stamped_message << endl;
    }
}

Logging::~Logging() {
    cout << "Destroying the Logger" << endl;
}