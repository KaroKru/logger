#ifndef LOGPARSER_HPP
#define LOGPARSER_HPP

#include "LogEntry.hpp"
#include <string>

class LogParser
{
public:
    static LogEntry parseLine(const std::string& readLine);
};

#endif //LOGPARSER_HPP
