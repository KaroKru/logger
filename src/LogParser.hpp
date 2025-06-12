#ifndef LOGPARSER_HPP
#define LOGPARSER_HPP

#include "LogEntryInt.hpp"
#include <string>
#include <memory>

class LogParser
{
public:
    static std::unique_ptr<LogEntryInt> parseLine(const std::string& readLine);
};

#endif //LOGPARSER_HPP
